class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        
        vector<vector<int>>ans;
        
        
      int fd=0;
        int pushed=0;
        for(int i=0;i<intervals.size();i++){
             
        if(intervals[i][1] < newInterval[0] || intervals[i][0] > newInterval[1]   )
        {
            if(fd && !pushed){
               ans.push_back(newInterval);
                pushed=1;
            }
             ans.push_back(intervals[i]);
        }else{
            fd=1;
             newInterval[0]=min(newInterval[0], intervals[i][0]);
             newInterval[1]=max(newInterval[1], intervals[i][1]);
        }
            
    }

     if(!pushed)
         ans.push_back(newInterval);
           
        sort(ans.begin(),ans.end(),[](vector<int>&v1, vector<int>&v2){
            
            return v1[0]<v2[0];
        })
        ;
        
        return ans;
        
    }    
};