class DSU{
    public:
    vector<int>par,sz,mx,mn;
    
    DSU(int n){
        sz.resize(n,0);
        for(int i=0;i<n;i++){
            par.push_back(i);
            mx.push_back(i);
            mn.push_back(i);
        }
    }
    
    int find(int u){
        return u==par[u]?u:par[u]=find(par[u]);
    }
    
    
    bool join(int u,int v){
        
        u=find(u), v=find(v);
        
        if(u==v) return 0;
        
        if(sz[u]>sz[v]) swap(u,v);
        
        par[u]=v;
        sz[v]+= sz[v];
        
        mn[v]=min(mn[u], mn[v]);
        mx[v]= max(mx[v], mx[u]);
        return 1;
    }
    
    
};





class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        const int n=s.size();
        
        DSU dsu(n);
        for(int i=0;i<pairs.size();i++){
            dsu.join(pairs[i][0],pairs[i][1]);
        }
        
        unordered_map<int,vector<int>>mp;
        string ans(n,' ');
        for(int i=0;i<n;i++){
            mp[dsu.find(i)].push_back(i);
        }
       
        for(auto &component: mp){
            vector<int>idxes = component.second;
            vector<char>chars;
            
            for(int i=0;i<idxes.size();i++)
                chars.push_back(s[idxes[i]]);
            
            sort(chars.begin(), chars.end());
            
            for(int i=0;i<idxes.size();i++){
                ans[idxes[i]]=chars[i];
            }
        }
        
        
        
        
        return ans;
    }
};


    