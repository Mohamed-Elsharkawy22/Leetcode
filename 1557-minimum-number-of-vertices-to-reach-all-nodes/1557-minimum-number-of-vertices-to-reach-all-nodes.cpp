class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>check(n, false);
        int len = edges.size();
        for(int i=0; i<len; i++){
            check[edges[i][1]] = true;
        }
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(!check[i])ans.push_back(i);
            
        }
        return ans;
    }
};