class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        const int n = (int)heights.size();
        priority_queue<int>pq;
        int i;
        for(i=0;i<n-1;i++){
            
            if(heights[i+1] <= heights[i]) continue;
            
            
            
            int diff= heights[i+1] - heights[i];
            
            bricks -= diff;
            pq.push(diff);
            
            if(bricks <0){
                bricks += pq.top();
                pq.pop();
                
                ladders--;
                
            }
            
           if(ladders <0) break;
            
        }
        return i;
        
        
    }
};