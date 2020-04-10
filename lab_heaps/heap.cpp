
/**
 * @file heap.cpp
 * Implementation of a heap class.
 */

template <class T, class Compare>
size_t heap<T, Compare>::root() const
{
    return 1;
}

template <class T, class Compare>
size_t heap<T, Compare>::leftChild(size_t currentIdx) const
{
    return 2 * currentIdx;
}

template <class T, class Compare>
size_t heap<T, Compare>::rightChild(size_t currentIdx) const
{
    return 2 * currentIdx + 1;
}

template <class T, class Compare>
size_t heap<T, Compare>::parent(size_t currentIdx) const
{
    return currentIdx / 2;
}

template <class T, class Compare>
bool heap<T, Compare>::hasAChild(size_t currentIdx) const
{
    if (leftChild(currentIdx) > _elems.size() && rightChild(currentIdx) > _elems.size())
    {
        return false;
    }
    return true;
}

template <class T, class Compare>
size_t heap<T, Compare>::maxPriorityChild(size_t currentIdx) const
{
    if (leftChild(currentIdx) > _elems.size())
    {
        return rightChild(currentIdx);
    }
    else if (rightChild(currentIdx) > _elems.size())
    {
        return leftChild(currentIdx);
    }
    else if (higherPriority(_elems[leftChild(currentIdx), rightChild(currentIdx)]))
    {
        return leftChild(currentIdx);
    }
    return rightChild(currentIdx);
}

template <class T, class Compare>
void heap<T, Compare>::heapifyDown(size_t currentIdx)
{
    int size = _elems.size();
    int left_idx = leftChild(currentIdx);
    int right_idx = rightChild(currentIdx);
    int min_idx = currentIdx;

    if (left_idx >= size)
    {
        return;
    }

    if (_elems[currentIdx] > _elems[left_idx])
    {
        min_idx = left_idx;
    }

    if ((right_idx < size) && higherPriority(_elems[right_idx], _elems[min_idx]))
    {
        min_idx = right_idx;
    }

    if (min_idx != currentIdx)
    {
        std::swap(_elems[currentIdx], _elems[min_idx]);
        heapifyDown(min_idx);
    }
}

template <class T, class Compare>
void heap<T, Compare>::heapifyUp(size_t currentIdx)
{
    if (currentIdx == root())
        return;
    size_t parentIdx = parent(currentIdx);
    if (higherPriority(_elems[currentIdx], _elems[parentIdx]))
    {
        std::swap(_elems[currentIdx], _elems[parentIdx]);
        heapifyUp(parentIdx);
    }
}

template <class T, class Compare>
heap<T, Compare>::heap()
{
    _elems.push_back(T());
}

template <class T, class Compare>
heap<T, Compare>::heap(const std::vector<T> &elems)
{
    _elems.push_back(T());
    for (T val : elems)
    {
        _elems.push_back(val);
    }
    std::sort(_elems.begin() + 1, _elems.end());
}
template <class T, class Compare>
T heap<T, Compare>::pop()
{
    int size = _elems.size();
    T p;
    if (size > 1)
    {
        p = _elems[1];
        _elems[1] = _elems[size - 1];
        _elems.pop_back();
        heapifyDown(1);
    }
    else
    {
        return T();
    }
    return p;
}

template <class T, class Compare>
T heap<T, Compare>::peek() const
{
    return _elems.at(1);
}

template <class T, class Compare>
void heap<T, Compare>::push(const T &elem)
{
    _elems.push_back(elem);
    heapifyUp(_elems.size());
}

template <class T, class Compare>
void heap<T, Compare>::updateElem(const size_t &idx, const T &elem)
{
    if (elem < _elems[idx])
    {
        _elems[idx] = elem;
        heapifyUp(idx);
    }
    else
    {
        _elems[idx] = elem;
        heapifyDown(idx);
    }
}

template <class T, class Compare>
bool heap<T, Compare>::empty() const
{
    return _elems.empty();
}

template <class T, class Compare>
void heap<T, Compare>::getElems(std::vector<T> &heaped) const
{
    for (size_t i = root(); i < _elems.size(); i++)
    {
        heaped.push_back(_elems[i]);
    }
}
