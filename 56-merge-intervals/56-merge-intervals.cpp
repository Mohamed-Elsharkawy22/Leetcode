class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        sort(intervals.begin(), intervals.end(),[](const vector<int>&v1,const vector<int>&v2){
           if(v1[0]==v2[0]){
               return v1[1]<v2[1];
           }else{
               return v1[0] < v2[0];
           } 
        });
        
        int st = intervals[0][0];
        int en = intervals[0][1];
        
        vector<vector<int>>ans;
        for(int i=1;i<intervals.size();i++){
            
            int stCurrent = intervals[i][0];
            if(stCurrent <= en ){
                en = max(en, intervals[i][1]);
            }else{
                ans.push_back({st,en});
                st = intervals[i][0];
                en = intervals[i][1]; 
            }
            
        }
          ans.push_back({st,en});
        
        return ans;
        
    }
};