class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        
          if(nums.empty())return vector<int>{-1,-1};
        
        int lo=0, hi=nums.size()-1;
        
        while(lo<hi){
            
            int mid=lo+(hi-lo)/2;
            
            if(nums[mid] >= target)
                hi=mid;
            else
                lo=mid+1;
        }
        
        if(nums[lo]==target)
          ans.push_back(lo);
        else
            return vector<int>{-1,-1};
        cout<<lo<<endl;
        
        lo=0, hi=nums.size()-1;
        
        while(lo<hi){
            int mid=lo+(hi-lo+1)/2;
            
            if(nums[mid]<= target)
                lo=mid;
            else
                hi=mid-1;
        }
        
    
    if(nums[lo]==target)
          ans.push_back(lo);
        else
            return vector<int>{-1,-1};   
        
    return ans;
    }
};