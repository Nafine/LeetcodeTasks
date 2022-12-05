#include <vector>

int findPeakElement(std::vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        int mid;
        while(r != l)
        {
            mid = (l + r) / 2;

            if (nums[mid] > nums[mid + 1])
            {
                r = mid;
            }

            else
            {
                l = mid + 1;
            }
        }

        return l;
    }