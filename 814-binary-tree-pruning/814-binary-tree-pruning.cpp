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
    TreeNode* pruneTree(TreeNode* root) {
        
        if(sol(root))
            return root;
        
        return NULL;
    }
    
    
    bool sol(TreeNode* root){
        if(root==NULL)
            return 0;
        
        bool left = sol(root->left);
        
        bool right = sol(root->right);
    
      if(!left) 
           root->left = NULL; 
    
      if(!right)  
            root->right = NULL;
        
      
    return (root->val ==1 || left || right );
        
    }
    
    
};