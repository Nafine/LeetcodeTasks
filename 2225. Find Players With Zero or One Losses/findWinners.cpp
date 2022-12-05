#include <vector>
#include <map>
#include <utility>

std::vector<std::vector<int>> findWinners(std::vector<std::vector<int>>& matches) 
    {
        std::map<int, std::pair<int, int>> playerStat;

        for (auto pair : matches)
        {
            playerStat[pair[0]].first++;
            playerStat[pair[1]].second++;
        }

        std::vector<std::vector<int>> answer(2);

        for (auto pair : playerStat)
        {
            if (pair.second.first > 0 && pair.second.second == 0) answer[0].push_back(pair.first);

            else if (pair.second.second == 1) answer[1].push_back(pair.first);
        }

        return answer;
    }