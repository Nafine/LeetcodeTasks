#include <vector>
#include <stack>
#include <map>

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
{
    stack<int> s;
    unordered_map<int, int> m;

    for (int i : nums2)
    {
        while (s.size() && s.top() < i)
        {
            m[s.top()] = i;

            s.pop();
        }

        s.push(i);
    }

    vector<int> ans;
    for (int i : nums1) ans.push_back(m.count(i) ? m[i] : -1);

    return ans;
}
