class Solution {
    public int wiggleMaxLength(int[] nums) {
       int positive=1;
        int negative=1;
        
        for(int i=1;i<nums.length;i++){
            
            if(nums[i]-nums[i-1]>0)
                positive=1+negative;
             if(nums[i]-nums[i-1]<0)
                 negative=1+positive;
            
        }
        
        return Math.max(positive, negative);
        
    }
}







    
    
    