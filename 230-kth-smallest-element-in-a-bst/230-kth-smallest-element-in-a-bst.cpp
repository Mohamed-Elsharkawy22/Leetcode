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
    int kk=0;
    int ans;
    int kthSmallest(TreeNode* root, int k) {
       kk=k;
        solve(root);
        return ans;
    }
    void solve(TreeNode* root){
         if(root != NULL){
            solve(root->left);
            kk--;
            if(kk==0){
                ans = root->val;
                return;
            }
            
             solve(root->right);
        }
    }
    
    
};