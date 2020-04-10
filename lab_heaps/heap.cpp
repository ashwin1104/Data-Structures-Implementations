#include <iostream>
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
    if (leftChild(currentIdx) >= _elems.size() && rightChild(currentIdx) >= _elems.size())
    {
        return false;
    }
    return true;
}

template <class T, class Compare>
size_t heap<T, Compare>::maxPriorityChild(size_t currentIdx) const
{
    if (rightChild(currentIdx) >= _elems.size())
    {
        return leftChild(currentIdx);
    }
    else if (higherPriority(_elems[leftChild(currentIdx)], _elems[rightChild(currentIdx)]))
    {
        return leftChild(currentIdx);
    }
    return rightChild(currentIdx);
}

template <class T, class Compare>
void heap<T, Compare>::heapifyDown(size_t currentIdx)
{
    if (!hasAChild(currentIdx))
    {
        return;
    }
    int superior = maxPriorityChild(currentIdx);
    if (higherPriority(_elems[superior], _elems[currentIdx]))
    {
        std::swap(_elems[currentIdx], _elems[superior]);
        heapifyDown(superior);
    }
}

template <class T, class Compare>
void heap<T, Compare>::heapifyUp(size_t currentIdx)
{
    if (currentIdx == root())
    {
        return;
    }
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
    for (unsigned i = _elems.size() - 1; i >= root(); i--)
    {
        heapifyDown(i);
    }
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
    return _elems[1];
}

template <class T, class Compare>
void heap<T, Compare>::push(const T &elem)
{
    _elems.push_back(elem);
    heapifyUp(_elems.size() - 1);
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
    return (_elems.size() == 1);
}

template <class T, class Compare>
void heap<T, Compare>::getElems(std::vector<T> &heaped) const
{
    for (size_t i = root(); i < _elems.size(); i++)
    {
        heaped.push_back(_elems[i]);
    }
}
