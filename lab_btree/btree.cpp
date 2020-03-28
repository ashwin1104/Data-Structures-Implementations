/**
 * @file btree.cpp
 * Implementation of a B-tree class which can be used as a generic dictionary
 * (insert-only). Designed to take advantage of caching to be faster than
 * standard balanced binary search trees.
 */

/**
 * Finds the value associated with a given key.
 * @param key The key to look up.
 * @return The value (if found), the default V if not.
 */
template <class K, class V>
V BTree<K, V>::find(const K &key) const
{
    return root == nullptr ? V() : find(root, key);
}

// /**
//  * Private recursive version of the find function.
//  * @param subroot A reference of a pointer to the current BTreeNode.
//  * @param key The key we are looking up.
//  * @return The value (if found), the default V if not.
//  */
template <class K, class V>
V BTree<K, V>::find(const BTreeNode *subroot, const K &key) const
{
    if (!subroot || subroot->elements.empty())
    {
        return V();
    }

    size_t first_larger_idx = insertion_idx(subroot->elements, key);

    if (first_larger_idx <= subroot->elements.size())
    {
        if (subroot->elements[first_larger_idx] == key)
        {
            return subroot->elements[first_larger_idx].value;
        }
        else if (subroot->is_leaf)
        {
            return V();
        }
        else
        {
            return find(subroot->children[first_larger_idx], key);
        }
    }
    return V();
}

/**
 * Inserts a key and value into the BTree. If the key is already in the
 * tree do nothing.
 * @param key The key to insert.
 * @param value The value to insert.
 */
template <class K, class V>
void BTree<K, V>::insert(const K &key, const V &value)
{
    /* Make the root node if the tree is empty. */
    if (root == nullptr)
    {
        root = new BTreeNode(true, order);
    }
    insert(root, DataPair(key, value));
    /* Increase height by one by tossing up one element from the old
     * root node. */
    if (root->elements.size() >= order)
    {
        BTreeNode *new_root = new BTreeNode(false, order);
        new_root->children.push_back(root);
        split_child(new_root, 0);
        root = new_root;
    }
}

/**
 * Splits a child node of a BTreeNode. Called if the child became too
 * large.
 * @param parent The parent whose child we are trying to split.
 * @param child_idx The index of the child in its parent's children
 * vector.
 */
template <class K, class V>
void BTree<K, V>::split_child(BTreeNode *parent, size_t child_idx)
{
    if (!parent || parent->children.empty())
    {
        return;
    }
    BTreeNode *child = parent->children[child_idx];
    BTreeNode *new_left = child;
    BTreeNode *new_right = new BTreeNode(child->is_leaf, order);

    size_t mid_elem_idx = (child->elements.size() - 1) / 2;
    size_t mid_child_idx = child->children.size() / 2;
    // std::cout << "Node: " << parent->elements[0].key << std::endl;
    // std::cout << "mid_elem_idx: " << mid_elem_idx << std::endl;
    // std::cout << "mid_child_idx: " << mid_child_idx << std::endl;

    /* Iterator for where we want to insert the new child. */
    auto child_itr = parent->children.begin() + child_idx + 1;
    /* Iterator for where we want to insert the new element. */
    auto elem_itr = parent->elements.begin() + child_idx;
    /* Iterator for the middle element. */
    auto mid_elem_itr = child->elements.begin() + mid_elem_idx;
    auto mid_elem_itr_2 = child->elements.begin() + mid_elem_idx + 1;

    /* Iterator for the middle child. */
    auto mid_child_itr = child->children.begin() + mid_child_idx;
    auto mid_child_itr_2 = child->children.begin() + mid_child_idx + 1;

    DataPair middle_element = child->elements[mid_elem_idx];
    parent->elements.insert(elem_itr, middle_element);
    parent->children.insert(child_itr, new_right);

    int pop_count = 1;
    for (auto it = mid_elem_itr_2; it != child->elements.end(); ++it)
    {
        new_right->elements.push_back(*it);
        pop_count++;
    }
    for (int i = 0; i < pop_count; i++)
    {
        new_left->elements.pop_back();
    }
    if (mid_child_idx == 0)
    {
        return;
    }
    pop_count = 0;
    for (auto it = mid_child_itr; it != child->children.end(); ++it)
    {
        new_right->children.push_back(*it);
        pop_count++;
    }
    for (int i = 0; i < pop_count; i++)
    {
        new_left->children.pop_back();
    }
}

/**
 * Private recursive version of the insert function.
 * @param subroot A reference of a pointer to the current BTreeNode.
 * @param pair The DataPair to be inserted.
 * Note: Original solution used std::lower_bound, but making the students
 * write an equivalent seemed more instructive.
 */
template <class K, class V>
void BTree<K, V>::insert(BTreeNode *subroot, const DataPair &pair)
{
    if (!subroot)
    {
        return;
    }
    size_t first_larger_idx = insertion_idx(subroot->elements, pair);
    if (first_larger_idx < subroot->elements.size() && subroot->elements[first_larger_idx] == pair)
    {
        return;
    }
    if (subroot->is_leaf)
    {
        auto it = subroot->elements.begin() + first_larger_idx;
        subroot->elements.insert(it, pair);
    }
    else
    {
        insert(subroot->children[first_larger_idx], pair);
        if (subroot->children[first_larger_idx]->elements.size() >= order)
        {
            split_child(subroot, first_larger_idx);
        }
    }
}
