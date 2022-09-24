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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        if(!root) return vector<vector<int>>();
        
       vector<int>cur;
        vector<vector<int>>ans;
        sum(root,root->val, targetSum, cur,ans);
        
        return ans;
    }
    
    
    void sum(TreeNode* root, int cur, int target, vector<int> &curr, vector<vector<int>>&ans){
         
        if(root->left == NULL && root->right==NULL ){
            
            if(cur==target){
                curr.push_back(root->val);
            ans.push_back(curr);
                curr.pop_back();
            }
            return;
        }
        
        curr.push_back(root->val);
        if(root->left){
            sum(root->left,cur+root->left->val,target,curr,ans);
        }
        
        if(root->right){
            sum(root->right,cur+root->right->val,target,curr,ans);
        }
        
        curr.pop_back();
        
    }
    
    
};