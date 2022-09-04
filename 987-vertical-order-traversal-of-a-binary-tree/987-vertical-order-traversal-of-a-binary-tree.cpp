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
    
    static bool check(const pair<int,int> &a, const pair<int,int> &b){
             
        if(a.second==b.second)
            return a.first<b.first;
        else    
            return a.second<b.second;
        
            }
    
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
          
        vector<vector<int>>ans;
        map<int, vector<pair<int,int>>>mp;
        
        dfs(root,0,0,mp); //o(n)
        
        for(auto &v : mp){ //o(n+nlogn+n) o(n(2+logn))
            sort(v.second.begin(), v.second.end(), check);
            vector<int>temp;
            for(auto val: v.second )
                temp.push_back(val.first);
            
            ans.push_back(temp);
        }
    return ans;
    }
    
    
    
    void dfs(TreeNode* root, int col, int row,  map<int, vector<pair<int, int>>>&v){
        
        if(root == NULL) return ;
        
         v[col].push_back({root->val,row});
        dfs(root->left, col-1, row+1,v);
       
        dfs(root->right, col+1, row+1,v);
        
        
        
    }
  
    
    
};