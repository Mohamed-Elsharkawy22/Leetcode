/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return 0;
        
        return(hasSum(root, targetSum,0));
            
            
    }
    
     bool hasSum(TreeNode* root, int targetSum, int sum) {
    
         if(root == NULL)
                return false;
      sum+=root->val;
         if(sum == targetSum && root->left == NULL && root->right == NULL)
             return 1;
        
        return( hasSum(root->left, targetSum,sum )|| hasSum(root->right, targetSum, sum) );
         }
    
};