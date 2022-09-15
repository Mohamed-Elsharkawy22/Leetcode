class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       
        const int n=graph.size();
    
        vector<int>adj[n]; 
        vector<int>in(n,0);
        
        queue<int>q;
        for(int i=0;i<n;i++){
            for(int v:graph[i])
            {
                in[i]++;
                adj[v].push_back(i);
            }
            
        } 
    
        for(int i=0;i<n;i++){
            if(in[i]==0)
                q.push(i);
        }
        
        vector<int>ans;
        
        while(!q.empty()){
            int top=q.front();
            q.pop();
            
            ans.push_back(top);
            for(int v:adj[top])
            {
                in[v]--;
                if(in[v]==0)
                    q.push(v);
            }
            
        }
        
        
     sort(ans.begin(), ans.end());
        
        return ans;
    
    }
    
};
