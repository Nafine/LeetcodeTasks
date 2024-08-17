vector<vector<int>> levelOrder(TreeNode* root) {
        
	if (root == NULL) return {};
        
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        TreeNode* temp;
        
        int len;
        while(!q.empty())
        {
            len = q.size();
            
            vector<int> v;
            
            for(size_t i = 0; i < len; i++)
            {
                temp = q.front();
                q.pop();
                
                v.push_back(temp->val);
                
                if (temp->left != nullptr) q.push(temp->left);
                if (temp->right != nullptr) q.push(temp->right);
            }
            
            ans.push_back(v);
        }
        
        return ans;
}
