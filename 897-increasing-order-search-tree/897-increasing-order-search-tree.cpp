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
    TreeNode* ans= NULL, *ptr1= NULL;
public:
    TreeNode* increasingBST(TreeNode* root) {
        
        if(root != NULL){
            increasingBST(root->left);
            
            if(ans==NULL){
                ans = new TreeNode(root->val);
               ptr1=ans;
            
            }else{
                ptr1->right = new TreeNode(root->val);
                ptr1=ptr1->right;
            }
            
            increasingBST(root->right);   
        }
        
        return ans;
    }
};