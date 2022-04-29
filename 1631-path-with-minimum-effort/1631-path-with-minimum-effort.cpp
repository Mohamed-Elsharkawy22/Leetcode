class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int dx[] ={0,0,-1,1};
        int dy[] ={1,-1,0,0};
        
        const int n = heights.size();
        const int m = heights[0].size();
        
        vector<vector<int>>cost(n,vector<int>(m,INT_MAX));
        
        priority_queue< pair<int, pair<int,int> > >pq;
        
        
        cost[0][0]=0;
        pq.push({0,{0,0}});
        
        while(!pq.empty()){
           
            pair<int, pair<int,int>> top = pq.top();
            int c = -1*top.first;
            int row = top.second.first;
            int col = top.second.second;
            pq.pop();
            
            if(c > cost[row][col]) continue;
            
            for(int i=0;i<4;i++){
                int nr=row+dx[i];
                int nc=col+dy[i];
                
                if(nr >=0 && nc>=0 && nr < n && nc < m){
                    
                    int nCost = max(c, abs(heights[row][col] - heights[nr][nc])); 
                    
                    if(nCost < cost[nr][nc]){
                        cost[nr][nc] = nCost;
                        pq.push({-nCost,{nr,nc}});
                    }
                }
                
                
            }
            
            
            
        }
        
        /// is it always reach the sol? if not we should include 
        // that if the cost inf we return 0;
        
        return cost[n-1][m-1];
        
        
        
        
    }
};