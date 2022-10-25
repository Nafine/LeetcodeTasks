#include <vector>

TreeNode* sortedArrayToBST(vector<int>& nums)    {

    int midIdx = nums.size() / 2;

    int mid = nums[midIdx];

    TreeNode* head = new TreeNode(mid);

    TreeNode* current = head;

    for (size_t i = midIdx - 1; i >= 0; --i)
    {
        current->left = new TreeNode(nums[i]);

        current = current->left;

        if (i == 0) break;
    }

    current = head;

    for (size_t i = midIdx + 1; i < nums.size();++i)
    {
        current->right = new TreeNode(nums[i]);

        current = current->right;
    }

    return head;
}