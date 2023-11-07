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
   
    bool isValidBST(TreeNode* root) {
         vector<int>flatBST;
        generateVector(root, flatBST);

        for(int i=1;i<flatBST.size();i++){
            if(flatBST[i] <= flatBST[i-1])
                return false;
        }

        return true;

    }

    void generateVector(TreeNode* root,  vector<int> &flatBST){
        if(!root)
            return;
        generateVector(root->left, flatBST);
        flatBST.push_back(root->val);
        generateVector(root->right, flatBST);

    }
};