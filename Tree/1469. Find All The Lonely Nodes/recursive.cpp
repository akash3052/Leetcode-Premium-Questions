class Solution {
public:
    void solve(TreeNode* root, vector<int> &res){
        if(!root)
            return;
        if(root->left && !root->right)
            res.push_back(root->left->val);
        if(root->right && !root->left)
            res.push_back(root->right->val);
        solve(root->left, res);
        solve(root->right, res);
    }

    vector<int> getLonelyNodes(TreeNode* root) {
        vector<int> res;
        solve(root, res);
        return res;
    }
};




