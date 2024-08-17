#include <vector>
#include <map>
#include <string>
#include <algorithm>

bool wordPattern(string pattern, string s)
{
    vector<string> words {""};
    vector<string> seenWords {};

    unordered_map<char, string> m;

    for (char c : s)
    {
        if (c == ' ') words.push_back("");

        else words.back().push_back(c);
    }

    if (pattern.size() != words.size()) return false;

    for (size_t i = 0; i < pattern.size(); i++)
    {
        if (m.find(pattern[i]) == m.end() && find(seenWords.begin(), seenWords.end(), words[i]) != seenWords.end()) return false;

        seenWords.push_back(words[i]);

        m.emplace(pattern[i], words[i]);
    }

    for (size_t i = 0; i < pattern.size(); i++)
    {
        if (m[pattern[i]] != words[i]) return false;
    }

    return true;
}