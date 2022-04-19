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
 
    int diameterOfBinaryTree(TreeNode* root) {
         int ans=0;
    int dummyMxDepth = mxDepth(root, ans);
        
        
        return ans;
    }
    
    int mxDepth(TreeNode* root, int &sum){
        if(root ==NULL) return 0;
        
        int left = mxDepth(root->left, sum);
        int right = mxDepth(root->right, sum);
        
         sum = max(sum, left+right);
        
        return max(left,right)+1;
    }
    
    
   
};