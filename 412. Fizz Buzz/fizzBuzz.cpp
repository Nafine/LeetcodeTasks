#include<vector>
#include <algorithm>

std::vector<std::string> fizzBuzz(int n)
{
    std::vector<std::string> ans(n);

    n += 1;

    std::for_each(ans.rbegin(), ans.rend(), [&n](std::string& str) 
        {
            n--;
            str = n % 5 == 0 ? (n % 3 == 0 ? "FizzBuzz" : "Buzz") : (n % 3 == 0 ? "Fizz" : std::to_string(n));
        });

    return ans;
}