class Solution {
public:
    
    int shortestPathLength(vector<vector<int>>& graph) {
        
     int numberOfNodes = graph.size();
        
        int visitedAll= (1<<numberOfNodes)-1;
        queue< pair<int,int> >q;
        vector< vector<int> >vis(numberOfNodes, vector<int>(visitedAll+1,0));
        
        for(int i=0;i<numberOfNodes;i++){
            q.push({i,(1<<i)}); // multi source bfs
            vis[i][1<<i]=1;
        }
        
        int lvl=0;
        
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
               auto state = q.front();
                q.pop();
                
                for(int child: graph[state.first]){
                    int newState = state.second | (1<<child);
                    if(newState==visitedAll){
                        return 1+lvl;
                    }
                    
                    if(!vis[child][newState]){ // if not visited
                       vis[child][newState]=1;
                        q.push({child, newState});
                    }
                }
            }
            lvl++;
        }
       return 0; 
    } 
};