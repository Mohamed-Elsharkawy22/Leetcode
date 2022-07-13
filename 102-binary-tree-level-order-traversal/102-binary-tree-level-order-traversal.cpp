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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> ans;
        dfs(root,ans,0);
        return ans;
    }
    
    void dfs(TreeNode* root, vector<vector<int>>&ans, int height){
        if(root ==NULL) return;
        
        if(ans.size()<=height){
            ans.push_back(vector<int>());
        }
        
        ans[height].push_back(root->val);
        
        dfs(root->left,ans,height+1);
        dfs(root->right,ans, height+1);
        
    }
    
    
    
};