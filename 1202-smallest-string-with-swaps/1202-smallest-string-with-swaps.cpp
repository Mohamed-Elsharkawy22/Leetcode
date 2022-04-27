class DSU{
    public:
    vector<int>par,sz;
    
    DSU(int n){
        sz.resize(n,0);
        for(int i=0;i<n;i++){
            par.push_back(i);
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
        
        vector<vector<int>>mp(n);
        string ans(n,' ');
        for(int i=0;i<n;i++){
            mp[dsu.find(i)].push_back(i);
        }
       
        for(auto &component: mp){
            
            vector<char>chars;
            
            for(int i=0;i<component.size();i++)
                chars.push_back(s[component[i]]);
            
            sort(chars.begin(), chars.end());
            
            for(int i=0;i<component.size();i++){
                ans[component[i]]=chars[i];
            }
        }
        
        return ans;
    }
};


    