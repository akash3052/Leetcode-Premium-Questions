class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)
            return NULL;
        if(!root1)
            return root2;
        if(!root2)
            return root1;
        queue<pair<TreeNode*, TreeNode*> > q;
        q.push({root1, root2});
        while(!q.empty()){
            pair<TreeNode*, TreeNode*> front = q.front();
            q.pop();
            TreeNode* tree1 = front.first;
            TreeNode* tree2 = front.second;
            tree1->val += tree2->val;
            // For left or right subtree, there can be 4 possibilites: 00, 01, 10, 11 but we are considering only 2 (01, 11) becasue 00 is not reqired 
            // and 10 is not required because t1->left is not null and t2->left is null, then we don't need to do any changes in t1 because we are merging t2 into t1;
            if(!tree1->left && tree2->left)
                tree1->left = tree2->left;
            else if(tree1->left && tree2->left){
                q.push({tree1->left, tree2->left});
            }
          
            // Same above logic is applied for right also.
            if(!tree1->right && tree2->right){
                tree1->right = tree2->right;
            }
            else if(tree1->right && tree2->right){
                q.push({tree1->right, tree2->right});
            }
            
        }
        return root1;
    }
};






