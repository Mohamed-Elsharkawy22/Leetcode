class Solution {
public:      
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
       vector<int> vis(6000,0);
       for(auto &i : forbidden) vis[i]=1;
        if(vis[x]==1) return -1;
        queue<pair<int,int>> q;
        q.push({0,1});
        int ans=0;
        
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
               pair<int,int> cur_vx = q.front();
               q.pop();
               int par = cur_vx.first;
               int dir = cur_vx.second;
               if(par==x) return ans;
               if(vis[par]==1) continue;
               vis[par]=1;
                
               int l = par - b;
               int r = par + a;
               if(l>=0 && dir==1) q.push({l,0});
               if(par <= 2000 + b ) q.push({r,1});  
            } 
            ans++;
        }
        return -1;
    }
};