class Solution {
public:
    bool bidfs(int node,int newcolor ,vector<vector<int>>&graph,vector<int>&color)
    {
        color[node]=newcolor;
        for(auto it : graph[node])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[node];
                if(!bidfs(it,1-newcolor,graph,color))return false;  
            }
            else if(color[node]==color[it])return false;
        }
        return true;
    }
    bool checkbi(vector<vector<int>>&graph,int n)
    {
        vector<int>color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
                if(!bidfs(i,1,graph,color))
                    return false;
        }
        return true;
    }
    bool possibleBipartition(int n,vector<vector<int>>& d) {
        vector<vector<int>>graph(n);
        for(int i=0;i<d.size();i++)
        {
            graph[d[i][0]-1].push_back(d[i][1]-1);
            graph[d[i][1]-1].push_back(d[i][0]-1);
            
        }
        return checkbi(graph,n);
    }
};

