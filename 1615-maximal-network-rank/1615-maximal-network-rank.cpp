class Solution {
public:
 set<int>s[105];

    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        for(int i=0;i<n;i++)s[i].clear();

        for(auto x:roads){
            int u=x[0];
            int v=x[1];
            s[u].insert(v);
            s[v].insert(u);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int cur=s[i].size()+s[j].size();
                if(s[i].count(j)){
                    cur--;
                }
                ans=max(ans,cur);
            }
        }
        return ans;
    }
};