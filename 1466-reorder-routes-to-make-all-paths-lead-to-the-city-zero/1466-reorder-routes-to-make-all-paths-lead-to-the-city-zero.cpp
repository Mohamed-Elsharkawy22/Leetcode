class Solution {
public:
    int dfs(int u , int p , vector<pair<int , int>> adj[]) {
        int ans = 0;
        for(pair<int , int> v : adj[u]) {
            if(v.first == p) continue;
            if(v.second) {
                ans += dfs(v.first , u , adj);
            } else {
                ans += dfs(v.first , u , adj) + 1;
            }
        }
        return ans;
    }
    int minReorder(int n, vector<vector<int>> &g) {
        vector<pair<int , int>> adj[n];
        for(int i=0 ; i<g.size() ; i++) {
            int u = g[i][0];
            int v = g[i][1];
            adj[u].push_back({v , 0});
            adj[v].push_back({u , 1});
        }
        return dfs(0 , -1 , adj);
    }
};