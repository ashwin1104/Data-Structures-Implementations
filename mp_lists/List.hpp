/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List()
{
  // @TODO: graded in MP3.1
  head_ = NULL;
  tail_ = NULL;
  length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const
{
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const
{
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}

/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy()
{
  ListNode *temp = head_;
  ListNode *temp2 = temp;
  while (temp != NULL)
  {
    temp2 = temp->next;
    delete temp;
    temp = temp2;
  }
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const &ndata)
{
  /// @todo Graded in MP3.1
  ListNode *newNode = new ListNode(ndata);
  newNode->next = head_;
  newNode->prev = NULL;

  if (head_ != NULL)
  {
    head_->prev = newNode;
  }
  if (tail_ == NULL)
  {
    tail_ = newNode;
  }
  head_ = newNode;

  length_++;
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T &ndata)
{
  /// @todo Graded in MP3.1
  ListNode *newNode = new ListNode(ndata);
  newNode->next = NULL;
  newNode->prev = tail_;

  if (tail_ != NULL)
  {
    tail_->next = newNode;
  }
  if (head_ == NULL)
  {
    head_ = newNode;
  }
  tail_ = newNode;

  length_++;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode *List<T>::split(ListNode *start, int splitPoint)
{
  /// @todo Graded in MP3.1
  if (splitPoint <= 0 || start == NULL)
  {
    return start;
  }
  if (splitPoint >= length_)
  {
    return NULL;
  }

  ListNode *curr = start;
  for (int i = 0; i < splitPoint; i++)
  {
    curr = curr->next;
    if (curr == NULL)
    {
      return NULL;
    }
  }
  curr->prev->next = NULL;
  curr->prev = NULL;
  return curr;
}

/**
  * Modifies List using the rules for a TripleRotate.
  *
  * This function will to a wrapped rotation to the left on every three
  * elements in the list starting for the first three elements. If the
  * end of the list has a set of 1 or 2 elements, no rotation all be done
  * on the last 1 or 2 elements.
  *
  * You may NOT allocate ANY new ListNodes!
  */
template <typename T>
void List<T>::tripleRotate()
{
  // @todo Graded in MP3.1
  ListNode *curr = head_;
  ListNode *temp = curr;
  ListNode *after;
  for (int i = 0; i < length_ / 3; i++)
  {
    curr = curr->next;

    if (i == 0)
    {
      curr->prev = temp->prev;
      head_ = curr;
    }
    else if (i > 0)
    {
      temp->next = curr;
      curr->prev = temp;
      temp = after;
    }

    curr = curr->next;
    after = curr->next;

    curr->next = temp;
    temp->prev = curr;
    temp->next = after;
    curr = after;

    if (i + 1 > length_ / 3)
    {
      tail_ = temp;
    }
  }
}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse()
{
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *&startPoint, ListNode *&endPoint)
{
  if (startPoint == endPoint || startPoint == NULL || endPoint == NULL)
  {
    return;
  }

  ListNode *temp_curr = head_;
  ListNode *temp_next;
  ListNode *endpt_next = endPoint->next;
  ListNode *start_prev = NULL;

  while (temp_curr != startPoint)
  {
    start_prev = temp_curr;
    temp_curr = temp_curr->next;
  }
  temp_curr = startPoint;

  if (start_prev != NULL)
  {
    start_prev->next = endPoint;
  }

  while (temp_curr != endpt_next)
  {
    temp_next = temp_curr->next;
    if (temp_curr == startPoint)
    {
      temp_curr->next = endpt_next;
    }
    else
    {
      temp_curr->next = temp_curr->prev;
    }

    if (temp_curr == endPoint)
    {
      temp_curr->prev = start_prev;
      if (startPoint == head_)
      {
        head_ = temp_curr;
      }
      endPoint = startPoint;
      startPoint = temp_curr;
      return;
    }
    temp_curr->prev = temp_next;
    temp_curr = temp_curr->prev;
  }
}
/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n)
{
  ListNode *startNode = head_;
  ListNode *endNode = startNode;
  while (startNode != NULL)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (endNode != tail_)
      {
        endNode = endNode->next;
      }
    }
    reverse(startNode, endNode);
    endNode = endNode->next;
    startNode = endNode;
  }
}

/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> &otherList)
{
  // set up the current list
  head_ = merge(head_, otherList.head_);
  tail_ = head_;

  // make sure there is a node in the new list
  if (tail_ != NULL)
  {
    while (tail_->next != NULL)
      tail_ = tail_->next;
  }
  length_ = length_ + otherList.length_;

  // empty out the parameter list
  otherList.head_ = NULL;
  otherList.tail_ = NULL;
  otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode *List<T>::merge(ListNode *first, ListNode *second)
{
  ListNode *new_head = first;
  ListNode *temp_node = new_head;
  ListNode *temp_first = first;
  ListNode *temp_second = second;
  if (second->data < first->data)
  {
    new_head = temp_second;
    temp_second = temp_second->next;
    temp_node = new_head;
  }
  else
  {
    temp_first = temp_first->next;
  }
  while (temp_first != NULL && temp_second != NULL)
  {
    if (temp_second->data < temp_first->data)
    {
      temp_node->next = temp_second;
      temp_second->prev = temp_node;
      temp_second = temp_second->next;
    }
    else
    {
      temp_node->next = temp_first;
      temp_first->prev = temp_node;
      temp_first = temp_first->next;
    }
    temp_node = temp_node->next;
  }
  if (temp_first == NULL && temp_second == NULL)
  {
    // do nothing
  }
  else if (temp_first == NULL)
  {
    temp_node->next = temp_second;
    temp_second->prev = temp_node;
  }
  else
  {
    temp_node->next = temp_first;
    temp_first->prev = temp_node;
  }
  return new_head;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode *List<T>::mergesort(ListNode *start, int chainLength)
{
  ListNode *temp_start = start;
  int second_length = chainLength / 2;
  ListNode *final;
  if (chainLength == 1)
  {
    start->prev = NULL;
    start->next = NULL;
    return start;
  }
  if (chainLength % 2 == 1)
  {
    second_length += 1;
  }
  for (int i = 0; i < chainLength / 2; i++)
  {
    temp_start = temp_start->next;
  }
  final = merge(mergesort(start, chainLength / 2), mergesort(temp_start, second_length));
  return final;
}