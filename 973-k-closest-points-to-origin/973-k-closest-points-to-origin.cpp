class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       priority_queue<pair<int,int>>pq;
        const int n=points.size();
        
        for(int i=0;i<n;i++){
            int x = points[i][0];
            int y = points[i][1];
            int dis=x*x+y*y;
           if(pq.size()<k){
               pq.push({dis,i});
           }else{
               if(pq.top().first > dis){
                   pq.pop();
                   pq.push({dis,i});
               }
           }
        }
        
        vector<vector<int>>ans;
        while(!pq.empty()){
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        
        
        return ans;
        
    }
};

// 18
//  26
// 20   