class DSU {
    public:
   vector<int>par, sz;
    int nSets=0;
    
    DSU(int n){
        nSets=n;
       for(int i=0;i<n;i++)
           par.push_back(i);
        
        sz.resize(n,1);
    }
    
    int find(int u){
        return u == par[u]?u:par[u]=find(par[u]);
    }
    
    bool join(int u, int v){
        
        u=find(u), v= find(v);
        
        if(u==v) return 0;
        
        if(sz[u] > sz[v]) swap(u,v);
        
        par[u]=v;
        sz[v]+=sz[u];
        --nSets;
        
        return 1;
        
    }
   
};


class edge{
    public:
    int from;
    int to;
    int cost;
};



class Solution {
public:
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        const int n = points.size(); 
        vector<edge>edges;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            
               int cost = abs(points[i][0] - points[j][0]) +                                                                   abs(points[i][1] - points[j][1]);

                edges.push_back({i,j,cost});
        }
        }
            
          sort(edges.begin(),edges.end(), [](edge v1, edge v2){
              return v1.cost < v2.cost;
          });
                                             
                     
                                                                                                             int ans = kruskal(edges, n);
          return ans;                                       
                                                                
    }
  
     int kruskal(vector<edge> &edges, const int &n){
         int mst=0;
         DSU dsu(n);
    
         for(int i=0;i<edges.size();i++){
             if(dsu.join(edges[i].from, edges[i].to)){
                 mst += edges[i].cost;
             }
         }
      return mst;   
     }                                                        
                                                             
                                                             
};







