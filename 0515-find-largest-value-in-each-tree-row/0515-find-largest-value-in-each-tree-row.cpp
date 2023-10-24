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
    vector<int> largestValues(TreeNode* root) {
        vector<int>values;
        // if(!root) return values;


        // queue<TreeNode*>q;
       
        // q.push(root);

        // while(!q.empty()){
        //     int sz = q.size();
        //     int mx = INT_MIN;
        //     while(sz--){
        //         auto top = q.front();
        //         q.pop();
        //         mx = max(mx, top->val);
        //         if(top->left != NULL){
        //             q.push(top->left);
        //         }
        //         if(top->right != NULL){
        //             q.push(top->right);
        //         }
        //     }
        //     values.push_back(mx);
        // }

        dfs(root, 0, values);
        return values;
    }



    void dfs(TreeNode* node, int depth, vector<int> &values){
        if(!node)
         return ;


         if(depth == values.size()) {// first node in new row
            values.push_back(node->val);
         }else{
             values[depth] = max(values[depth], node->val);
         }   


         dfs(node->left, depth+1, values);
         dfs(node->right, depth+1, values);

    }
};