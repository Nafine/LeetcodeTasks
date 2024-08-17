#include <string>
#include <map>
#include <algorithm>

string getHint(string secret, string guess) {

    int bulls = 0;
    int cows = 0;

    map<char, int> guessMap, secretMap;

    for (size_t i = 0; i < secret.size(); ++i)
    {
        if (guess[i] == secret[i]) bulls++;

        else
        {
            guessMap[guess[i]]++;
            secretMap[secret[i]]++;
        }
    }

    for (auto x : guessMap)
    {
        if (secretMap.find(x.first) != secretMap.end())
        {
            cows += min(x.second, secretMap[x.first]);
        }
    }

    return to_string(bulls) + 'A' + to_string(cows) + 'B';
}