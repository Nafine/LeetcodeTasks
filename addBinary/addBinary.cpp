#include <string>

string addBinary(string a, string b)
{
    size_t j = a.length() - 1;
    size_t i = b.length() - 1;
    int carry = 0;
    int sum;
    string res;

    while (j >= 0 || i >= 0)
    {
        if (j >= 0) sum += a[j--] - '0';

        if (i >= 0) sum += b[i--] - '0';

        carry = sum > 1 ? 1 : 0;

        res += to_string(sum % 2);
    }

    if (carry) res += to_string(carry);

    reverse(res.begin(), res.end());

    return res;
}