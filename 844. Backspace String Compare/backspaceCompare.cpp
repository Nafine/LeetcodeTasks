#include <string>

bool backspaceCompare(string s, string t)
{
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (s[i] == '#') 
        {
            if (i >= 1) {
                s.erase(i - 1, 2);
                i -= 2;
            }

            else s.erase(i,1);
        }
    }

    for (size_t i = 0; i < t.length();++i)
    {
        if (t[i] == '#')
        {
            if (i >= 1) {
                t.erase(i - 1, 2);
                i -= 2;
            }

            else t.erase(i, 1);
        }
    }

    return t == s;
}