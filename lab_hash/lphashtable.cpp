/**
 * @file lphashtable.cpp
 * Implementation of the LPHashTable class.
 */
#include "lphashtable.h"
#include <iostream>

template <class K, class V>
LPHashTable<K, V>::LPHashTable(size_t tsize)
{
    if (tsize <= 0)
        tsize = 17;
    size = findPrime(tsize);
    table = new std::pair<K, V> *[size];
    should_probe = new bool[size];
    for (size_t i = 0; i < size; i++)
    {
        table[i] = NULL;
        should_probe[i] = false;
    }
    elems = 0;
}

template <class K, class V>
LPHashTable<K, V>::~LPHashTable()
{
    for (size_t i = 0; i < size; i++)
        delete table[i];
    delete[] table;
    delete[] should_probe;
}

template <class K, class V>
LPHashTable<K, V> const &LPHashTable<K, V>::operator=(LPHashTable const &rhs)
{
    if (this != &rhs)
    {
        for (size_t i = 0; i < size; i++)
            delete table[i];
        delete[] table;
        delete[] should_probe;

        table = new std::pair<K, V> *[rhs.size];
        should_probe = new bool[rhs.size];
        for (size_t i = 0; i < rhs.size; i++)
        {
            should_probe[i] = rhs.should_probe[i];
            if (rhs.table[i] == NULL)
                table[i] = NULL;
            else
                table[i] = new std::pair<K, V>(*(rhs.table[i]));
        }
        size = rhs.size;
        elems = rhs.elems;
    }
    return *this;
}

template <class K, class V>
LPHashTable<K, V>::LPHashTable(LPHashTable<K, V> const &other)
{
    table = new std::pair<K, V> *[other.size];
    should_probe = new bool[other.size];
    for (size_t i = 0; i < other.size; i++)
    {
        should_probe[i] = other.should_probe[i];
        if (other.table[i] == NULL)
            table[i] = NULL;
        else
            table[i] = new std::pair<K, V>(*(other.table[i]));
    }
    size = other.size;
    elems = other.elems;
}

template <class K, class V>
void LPHashTable<K, V>::insert(K const &key, V const &value)
{
    ++elems;
    if (shouldResize())
    {
        resizeTable();
    }
    size_t idx = hashes::hash(key, size);
    if (table[idx])
    {
        while (should_probe[idx])
        {
            idx++;
        }
    }
    table[idx] = new std::pair<K, V>(key, value);
    should_probe[idx] = true;
    return;
}

template <class K, class V>
void LPHashTable<K, V>::remove(K const &key)
{
    int idx = findIndex(key);
    if (idx != -1)
    {
        table[idx] = NULL;
        should_probe[idx] = false;
    }
}

template <class K, class V>
int LPHashTable<K, V>::findIndex(const K &key) const
{
    size_t idx = hashes::hash(key, size);

    if (table[idx] != NULL)
    {
        while (!table[idx] || table[idx]->first != key)
        {
            idx++;
            if (idx == size - 1)
            {
                return -1;
            }
        }
        return idx;
    }
    return -1;
}

template <class K, class V>
V LPHashTable<K, V>::find(K const &key) const
{
    int idx = findIndex(key);
    if (idx != -1)
        return table[idx]->second;
    return V();
}

template <class K, class V>
V &LPHashTable<K, V>::operator[](K const &key)
{
    // First, attempt to find the key and return its value by reference
    int idx = findIndex(key);
    if (idx == -1)
    {
        // otherwise, insert the default value and return it
        insert(key, V());
        idx = findIndex(key);
    }
    return table[idx]->second;
}

template <class K, class V>
bool LPHashTable<K, V>::keyExists(K const &key) const
{
    return findIndex(key) != -1;
}

template <class K, class V>
void LPHashTable<K, V>::clear()
{
    for (size_t i = 0; i < size; i++)
        delete table[i];
    delete[] table;
    delete[] should_probe;
    table = new std::pair<K, V> *[17];
    should_probe = new bool[17];
    for (size_t i = 0; i < 17; i++)
        should_probe[i] = false;
    size = 17;
    elems = 0;
}

template <class K, class V>
void LPHashTable<K, V>::resizeTable()
{
    size_t old_size = size;
    size = findPrime(2 * size);
    std::pair<K, V> **table2 = new std::pair<K, V> *[size];
    delete[] should_probe;
    should_probe = new bool[size];
    for (size_t i = 0; i < size; i++)
    {
        table2[i] = NULL;
        should_probe[i] = false;
    }
    for (size_t i = 0; i < old_size; i++)
    {
        if (table[i] != NULL)
        {
            size_t idx = hashes::hash(table[i]->first, size);
            while (table2[idx] != NULL)
            {
                idx++;
            }
            table2[idx] = table[i];
            should_probe[idx] = true;
        }
    }
    delete[] table;
    table = table2;
}