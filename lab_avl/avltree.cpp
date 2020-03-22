/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K &key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node *subtree, const K &key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else
    {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}
template <class K, class V>
int AVLTree<K, V>::getHeight(Node *root)
{
    if (!root)
    {
        return 0;
    }
    int l = 1 + getHeight(root->left);
    int r = 1 + getHeight(root->right);
    return (l > r) ? l : r;
}
template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node *&t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    Node *&parent = t;
    Node *r = parent->right;
    parent->right = r->left;
    r->left = parent;
    parent->height = getHeight(parent);
    parent = r;
    r->height = getHeight(r);
}
template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node *&t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node *&t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    Node *&parent = t;
    Node *l = parent->left;
    parent->left = l->right;
    l->right = parent;
    parent->height = getHeight(parent);
    parent = l;
    l->height = getHeight(l);
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node *&t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node *&subtree)
{
    if (subtree == NULL)
    {
        return;
    }
    int l = getHeight(subtree->left);
    int r = getHeight(subtree->right);
    if (l - r < -1)
    {
        int rr = getHeight(subtree->right->right);
        int rl = getHeight(subtree->right->left);
        if (rl - rr < 0)
        {
            rotateLeft(subtree);
        }
        else
        {
            rotateRightLeft(subtree);
        }
    }
    else if (l - r > 1)
    {
        int ll = getHeight(subtree->left->left);
        int lr = getHeight(subtree->left->right);
        if (lr - ll < 0)
        {
            rotateRight(subtree);
        }
        else
        {
            rotateLeftRight(subtree);
        }
    }
    subtree->height = getHeight(subtree);
}

template <class K, class V>
void AVLTree<K, V>::insert(const K &key, const V &value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node *&subtree, const K &key, const V &value)
{
    if (!subtree)
    {
        subtree = new Node(key, value);
    }
    else if (key < subtree->key)
    {
        insert(subtree->left, key, value);
    }
    else if (key >= subtree->key)
    {
        insert(subtree->right, key, value);
    }
    rebalance(subtree);
}

template <class K, class V>
void AVLTree<K, V>::remove(const K &key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node *&subtree, const K &key)
{
    if (!subtree)
        return;

    if (key < subtree->key)
    {
        remove(subtree->left, key);
    }
    else if (key > subtree->key)
    {
        remove(subtree->right, key);
    }
    else
    {
        Node *l = subtree->left;
        Node *r = subtree->right;
        if (!l && !r)
        {
            delete subtree;
            subtree = NULL;
        }
        else if (l && r)
        {
            Node *curr = l;
            while (curr->right)
            {
                curr = curr->right;
            }
            swap(subtree, curr);
            remove(subtree->left, key);
        }
        else
        {
            delete subtree;

            if (!l)
            {
                subtree = r;
            }
            else
            {
                subtree = l;
            }
        }
    }
    rebalance(subtree);
}
