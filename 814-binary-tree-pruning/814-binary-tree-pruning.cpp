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
        auto ans = sol(root);
        
        return ans.first;
    }
    
    
    pair<TreeNode*, int> sol(TreeNode* root){
        if(root==NULL)
            return {NULL,0};
        
        
        int sz = root->val;
        
        auto left = sol(root->left);
        
        auto right = sol(root->right);
        
        sz += left.second + right.second;
        
         if(sz == 0)  // all subtree (root and its children should be NULL)
           return {NULL,0}; 
        
      if(left.second > 0)  
          root->left = left.first;
        else
           root->left = NULL; 
        
        
      if(right.second > 0)  
          root->right = right.first;   
        else
            root->right = NULL;
        
       
        
        return {root, sz};
        
    }
    
    
};