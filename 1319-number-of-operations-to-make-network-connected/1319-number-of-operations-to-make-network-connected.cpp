class Dsu
{
  private:
    vector<int>par,sz;
  public:
    Dsu(int n)
    {
     for(int i=0;i<n;i++)
      {
         par.push_back(i);
         sz.push_back(1);
      }
    }
    
    

    int find_par(int u)
    {
       if(u==par[u])
         return u;
         
        return par[u] = find_par(par[u]);
    }
     
     
    
    bool can_connect(int u, int v)
    {
      u = find_par(u), v = find_par(v);
    
      if(u==v)
        return 0;
        
        if(sz[u] > sz[v]) swap(u,v);
        
        par[u]=v;
        sz[v] += sz[u];
        
        return 1;
    
    }
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
     
        if(n-1 > connections.size())
            return -1;
         Dsu dsu(n);
        int cnt=0;
        for(int i=0;i<connections.size();i++)
        {
            if(dsu.can_connect(connections[i][0],connections[i][1]))
            {
                cnt++;
            }
        }
    
    
    return n-cnt-1;
    
    }
};




    
    
    