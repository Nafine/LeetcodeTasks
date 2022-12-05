#include <algorithm>
#include <vector>
int largestPerimeter(std::vector<int>& nums) {

    std::sort(nums.rbegin(), nums.rend()); //from more to less

    for (size_t i = 0; i <= nums.size() - 3; ++i)
    {
        if (nums[i] < nums[i + 1] + nums[i + 2])
            return nums[i] + nums[1] + nums[2];
    }

    return 0;
}