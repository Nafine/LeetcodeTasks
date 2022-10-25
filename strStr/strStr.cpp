#include <string>

int strStr(string haystack, string needle) {

    size_t h = haystack.size(), n = needle.size();

    int j = 0;
    for (size_t i = 0; i < h; i++)
    {
        j = 0;
        for (; j < n; j++)
        {
            if (haystack[i + j] != needle[j]) break;
        }

        if (j == n) return i;
    }

    return -1;
}