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
        
        int mx=mxDepth(root, ans);
        
    return ans;
    }
    
    int mxDepth(TreeNode* root, int &sum){
        
        if(root ==NULL) return 0;
        
        int lf= mxDepth(root->left,sum);
        int rt= mxDepth(root->right,sum);
        
        sum = max(sum, lf+rt );
        return max(lf,rt)+1;
        
    }
    
    
    
};