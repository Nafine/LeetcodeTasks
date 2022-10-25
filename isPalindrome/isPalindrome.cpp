#include <string>

bool isPalindrome(string s) {

    string str;

    for (char c : s)
    {
        if (isalpha(c))
        {
            c = tolower(c);
            str += c;
        }
    }

    size_t j = str.size() - 1;

    for (size_t i = 0; i < str.size() / 2;i++, j--)
    {
        if (str[i] != str[j]) return false;
    }

    return true;

}