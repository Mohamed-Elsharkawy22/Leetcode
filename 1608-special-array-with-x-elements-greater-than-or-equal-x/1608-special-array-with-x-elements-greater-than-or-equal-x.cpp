class Solution {
public:
    int specialArray(vector<int>& nums) {
   // 0 1 2 | 3 | 4 5   mid
  //  5 3 3 | 3 | 2 0   cnt
        //last example   
        
        int lo=0, hi=nums.size();
        
        while(lo<=hi){
            
            int mid=lo+(hi-lo)/2;
            
            int cnt=0;
            for(int v:nums)
                if(v >= mid)cnt++;
            
            if(cnt==mid)
                return mid;
            
            else if(cnt > mid){
                lo=mid+1;
            }
            else
                hi=mid-1;
            
        }
        
        
        return -1;
    }
};



