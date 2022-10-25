#include <vector>

int search(vector<int>& nums, int target) {

    int size = nums.size();
    int ans;

    for (size_t i = 0; nums.size() > 0; i++)
    {
        size = nums.size();
        ans = nums[size / 2];

        if (ans == target) return i;

        else if (ans < target)
        {
            nums.erase(nums.begin(), find(nums.begin(), nums.end(), ans));
            i += size / 2;
        }

        else
        {
            nums.resize(size / 2);
            i += size / 2;
        }
    }

    return -1;
}