#include <vector>

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans{};

    for (size_t i = 0; i < numRows; i++)
    {
        ans.push_back(vector<int>(i + 1, 1));

        for (size_t j = 1; j < ans[i].size() - 1;j++)
        {
            if (i > 1)
            {
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }

    }
    return ans;
}