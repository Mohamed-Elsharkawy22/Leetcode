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
    bool isSymmetric(TreeNode* root) {
        
        queue<pair<TreeNode *, TreeNode *>>q;
        q.push({root->left, root->right});
      
        while(!q.empty()){
            
            auto frontQ = q.front();
              q.pop();
          
            
            if(frontQ.first == frontQ.second && frontQ.second == NULL)
                continue;
            
            if(frontQ.first == NULL || frontQ.second == NULL)
                return false;
            
            if(frontQ.first->val != frontQ.second->val)
                 return false;
            
            q.push({frontQ.first->left, frontQ.second->right});
            q.push({frontQ.first->right, frontQ.second->left});
        }
    
        return true;
    }
    
    
  bool isSymmetricHelper(TreeNode* root1,TreeNode* root2){
        
      if(root1 == root2 && root1 == NULL)
          return 1;
      
      if(root1 == NULL || root2 == NULL)
          return 0;
      
      if(root1->val != root2->val)
            return 0;
            
        
       return (isSymmetricHelper(root1->left, root2->right) & isSymmetricHelper(root1->right, root2->left) );
      
      
    }
};