#include <vector>

vector<vector<int>> order(TreeNode* root, vector<vector<int>> &vec)
{
    if (root->left == nullptr && root->right == nullptr) return vec;

    vec.push_back(vector<int>{});

    if (root->left != nullptr)
    {
        vec.back().push_back(root->left->val);

        order(root->left, vec);
    }

    if (root->right != nullptr)
    {
        vec.back().push_back(root->right->val);
        order(root->right, vec);
    }

}

vector<vector<int>> levelOrder(TreeNode root)
{
    vectorvectorint ans{};

    ans.back().push_back(root-val);

    return order(root, ans);
}