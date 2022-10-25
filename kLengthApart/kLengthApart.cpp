#include <vector>

bool kLengthApart(vectorint& nums, int k) {

    int count = k;

    for (int i  nums)
    {
        if (i == 1)
        {
            if (count  k) return false;

            count = 0;
        }

        else ++count;
    }

    return true;
}