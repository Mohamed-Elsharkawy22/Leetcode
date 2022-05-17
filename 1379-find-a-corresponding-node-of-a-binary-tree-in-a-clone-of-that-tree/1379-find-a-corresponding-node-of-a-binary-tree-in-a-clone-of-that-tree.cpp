/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
     
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       TreeNode *ans = NULL;
        dfs(original, cloned, target,ans);

        return ans;
    }
    
    void dfs(TreeNode* original, TreeNode* cloned, TreeNode* target, TreeNode* &ans){
        
        if(original ==NULL)
            return;
        
        dfs(original->left, cloned->left, target,ans);
        
        if(original == target)
        {ans = cloned;
        return;
        }
         dfs(original->right, cloned->right, target,ans);
    }
    
};