#include <string>
#include <map>

int longestPal(string str)
{
    map<char, int> m;

    for (char c : str)
    {
        m.emplace(c, 0);
        m[c]++;
    }

    int ans = 0;
    for (auto i : m)
    {
        ans += (i.second  2)  2;

        if (ans % 2 == 0 && i.second % 2 == 0) ans++;
    }

    return ans;
}