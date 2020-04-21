/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>

using std::ifstream;
using std::string;
using std::vector;

/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string &filename)
{
    ifstream inputFile(filename);
    if (!inputFile.is_open())
    {
        return;
    }
    string line;
    while (getline(inputFile, line))
    {
        string curr_line = line;
        std::sort(curr_line.begin(), curr_line.end());
        dict[curr_line].push_back(line);
    }
}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 */
AnagramDict::AnagramDict(const vector<string> &words)
{
    vector<string> temp_words = words;
    for (string s : temp_words)
    {
        string curr = s;
        std::sort(curr.begin(), curr.end());
        dict[curr].push_back(s);
    }
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string &word) const
{
    /* Your code goes here! */
    if (word.size() >= 3)
    {
        string curr = word;
        std::sort(curr.begin(), curr.end());
        if (dict.count(curr) != 0)
        {
            return dict.at(curr);
        }
    }
    return vector<string>();
}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
    std::vector<std::vector<string>> ans;
    for (auto pair : dict)
    {
        vector<string> anagrams = pair.second;
        if (anagrams.size() > 1)
        {
            ans.push_back(anagrams);
        }
    }
    return ans;
}
