#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    std::vector<int> ans(2);

    std::unordered_map<int, int> proceeded;

    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (proceeded.find(target - nums[i]) == proceeded.end())
        {
            proceeded.emplace(nums[i], i);
        }

        else
        {
            ans[0] = proceeded[target - nums[i]];
            ans[1] = i;

            return ans;
        }
    }

    return ans;
}