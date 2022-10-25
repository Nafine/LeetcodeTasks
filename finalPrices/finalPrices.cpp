vector<int> finalPrices(vector<int> &prices)
{
    size_t size = prices.size() - 1;

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (prices[i] >= prices[j])
            {
                prices[i] -= prices[j];
                break;
            }
        }
    }

    return prices;
}