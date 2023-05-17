class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)
            return 0;
        if(root->val >= low && root->val <= high){
            return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        }else if(root->val < low){
            return rangeSumBST(root->right, low, high);
        }else{ 
            // this is basically (root->val > low && root->val > high) 
            // According to BST property, root < min(RST) -> if we go right then 
            // we will find value greater than root and root itself is greater than high, 
            // then we will not be able to find value less than high if we go right.
            return rangeSumBST(root->left, low, high);
        }
    }
};
