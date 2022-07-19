class DSU
{
    private:
      vector<int>parent, size;
      int numOfSets;
    
    public:
     DSU(int n)
     {
         numOfSets=n;
         for(int i=0;i<n;i++){
             parent.push_back(i);
             size.push_back(1);
         }
     }
    
    int find(int u)
    {
        if(parent[u] == u)
            return u;
        
        return parent[u] = find(parent[u]);
    }
    
    bool Connect(int u, int v)
    {
        u = find(u);
        v = find(v);
        
        if(u == v) 
            return 0;
        
        if(size[u] > size[v]) 
            swap(v, u);
        
        parent[v] = u;
        size[u] += size[v];
        numOfSets--;
        
        return 1;
    }
    
    int getNumberOfSets()
    {
        return numOfSets;    
    }
    
    
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        const int m=connections.size();
        if(m < n-1)
            return -1;
        
        DSU dsu(n);
        
        for(int i=0;i<m;i++){
            dsu.Connect(connections[i][0], connections[i][1]);
        }
        
        return dsu.getNumberOfSets()-1;
    }
};


