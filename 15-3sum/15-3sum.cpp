class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
 
        vector<vector<int>>ans;
        
      sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++){
            
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            int pt1=i+1;
            int pt2=nums.size()-1;
            
            while(pt1<pt2){
                
            if(nums[i]+nums[pt1]+nums[pt2]==0){
                    ans.push_back({nums[i],nums[pt1],nums[pt2]});
                
              
                while(pt1<pt2 && nums[pt1]==nums[pt1+1])
                    pt1++;
                while(pt1<pt2 && nums[pt2]==nums[pt2-1])
                    pt2--;
             
                pt1++;
                pt2--;  
                
            }else if(nums[i]+nums[pt1]+nums[pt2]>0){
                pt2--;
            }else{
                pt1++;
            }
            
         }
        
        }
        return ans;
        
    }
};