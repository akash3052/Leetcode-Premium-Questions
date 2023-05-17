
class Solution {
public:
    vector<int> getLonelyNodes(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> q;
        if(!root)
            return res;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node->left){
                // If there is only left child, then we are pushing only that child in res.
                if(!node->right){
                    res.push_back(node->left->val);
                }
                q.push(node->left);
            }
            if(node->right){
                 // If there is only right child, then we are pushing only that child in res.
                if(!node->left){
                    res.push_back(node->right->val);
                }
                q.push(node->right);
            }
        }
        return res;
    }
};


