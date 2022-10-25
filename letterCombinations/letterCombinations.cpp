#include <map>
#include <string>

vectorstring letterCombinations(string digits) 
{
    if (digits.empty()) return {};

    vectorstring ans{  };
    mapchar, string m;
    
    m.emplace(2 + '0', abc);
    m.emplace(3 + '0', def);
    m.emplace(4 + '0', ghi);
    m.emplace(5 + '0', jkl);
    m.emplace(6 + '0', mno);
    m.emplace(7 + '0', pqrs);
    m.emplace(8 + '0', tuv);
    m.emplace(9 + '0', wxyz);

    for (auto digits : digits)
    {
        vectorstring tmp;

        for (auto c : m[digits])
        {
            for (auto s  ans)
            {
                tmp.push_back(s + c);
            }
        }

        ans.swap(tmp);

    }

    return ans;
}