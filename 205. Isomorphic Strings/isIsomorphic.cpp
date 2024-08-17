#include <set>
#include <map>
#include <algorithm>

bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> m;
    set<char> seen;

    if (s.length() != t.length()) return false;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (m.find(s[i]) == m.end() && seen.find(t[i]) == seen.end())
        {
            m.emplace(s[i], t[i]);
            seen.emplace(t[i]);
        }

        if (m[s[i]] != t[i]) return false;
    }

    return true;
}