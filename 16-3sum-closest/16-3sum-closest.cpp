class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      
        
        sort(nums.begin(), nums.end());
        
        int mnDiff = 30000, ans=0; 
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            
            int ptr1 = i+1;
            int ptr2 = nums.size()-1;
            
            while(ptr1 < ptr2){
                int subSum = nums[i] + nums[ptr1] + nums[ptr2];
                
               if(abs(subSum -target) < mnDiff ){
                   mnDiff = abs(subSum -target);
                   ans = subSum;   
               }
                
               if( subSum > target){
                   ptr2--; 
               }else if(subSum < target){
                   ptr1++;
               }else
                   return subSum;
        }
        
    }   
      return ans;    
    }
};
