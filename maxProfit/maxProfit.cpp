#include <vector>

int maxProfit(vector<int> &prices)
{
    int finalDif = 0;
    int dif;

    for (size_t i = 0; i < prices.size(); i++)
    {
        for (size_t j = i; j < prices.size(); j++)
        {
            dif = prices[j] - prices[i];

            if (dif > finalDif)
            {
                finalDif = dif;
            }
        }
    }

    return finalDif;
}