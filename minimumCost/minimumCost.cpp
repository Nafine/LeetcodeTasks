#include <vector>
#includ <algorithm>

int minimumCost(vector<int>& cost) {

    sort(cost.begin(), cost.end());

    int count = 0;
    int ans = 0;

    for (auto it = cost.end() - 1; it != cost.begin();--it)
    {
        if (count == 2)
        {
            count = 0;
        }

        else
        {
            ans += *it;
            count++;
        }
    }

    return ans;
}