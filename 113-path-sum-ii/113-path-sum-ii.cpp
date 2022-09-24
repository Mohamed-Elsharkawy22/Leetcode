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
       
        if(!root) return {};
        map<TreeNode* ,TreeNode* > par;
        par[root]=NULL;
        
        vector<vector<int>>ans;
        sum(root,root->val, targetSum, par,ans);
        
        return ans;
    }
    
    
    void sum(TreeNode* root, int cur, int target, map<TreeNode* ,TreeNode*> &par, vector<vector<int>>&ans){
         
        if(root->left == NULL && root->right==NULL ){
            
            if(cur==target){
                vector<int>temp;
                TreeNode* r=root;
                
                while(r != NULL){
                    temp.push_back(r->val);
                    r = par[r];
                }
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
            }
            
            return;
        }
        
        
        if(root->left){
             par[root->left]=root;
            sum(root->left,cur+root->left->val,target,par,ans);
                  
        }
        
        if(root->right){
             par[root->right]=root;
            sum(root->right,cur+root->right->val,target,par,ans);
           
        }
        
        
        
    }
    
    
};