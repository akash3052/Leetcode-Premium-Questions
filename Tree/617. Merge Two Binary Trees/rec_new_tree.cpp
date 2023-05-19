class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)
            return nullptr;
        int val1 = root1 ? root1->val : 0;
        int val2 = root2 ? root2->val : 0;
        // Creating new Tree, not merging t2 into t1 like iterative solution.
        TreeNode* newNode = new TreeNode(val1+val2);
        newNode->left = mergeTrees(root1 ? root1->left : nullptr, root2 ? root2->left : nullptr);
        newNode->right = mergeTrees(root1 ? root1->right : nullptr, root2 ? root2->right : nullptr);
        return newNode;
    }
};
