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
        int numlvl=mxDepth(root, ans);
      
        return ans-2;
    }
    
    int mxDepth(TreeNode* root, int &SumLeftAndRight){
        
        if(root == nullptr)
            return 0;
        
        int lf= 1+ mxDepth(root->left,SumLeftAndRight);
        int rt= 1+ mxDepth(root->right, SumLeftAndRight);
        
        SumLeftAndRight=max(SumLeftAndRight, lf+rt);
        
        return max(lf, rt);
    }
    
    
};