class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
    int sum=0,cnt=0;
        
        if(nums.size()<3) return 0;
        
        
        for(int i=2;i<nums.size();i++){
            
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                cnt++;
            }else{
                sum += (cnt*(cnt+1))/2;
                cnt=0;
                
            }
            
        }
        if(cnt)
            sum += (cnt*(cnt+1))/2;
        
        return sum;
        
    }
};