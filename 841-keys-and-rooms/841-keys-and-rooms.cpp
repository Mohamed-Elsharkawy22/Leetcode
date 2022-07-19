class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        const int n=rooms.size();
        int cntNodes=0;
        vector<int> vis(n,0);
        dfs(0, rooms, vis, cntNodes);
        return cntNodes==n;  
    }
    
   void dfs(int node,vector<vector<int>>& rooms,vector<int> &vis,int &cntNodes)
   {
       vis[node]=1;
        cntNodes++;
       for(int val: rooms[node]){
           if(vis[val]==1) continue;
           dfs(val,rooms,vis,cntNodes);
       }
   } 
};