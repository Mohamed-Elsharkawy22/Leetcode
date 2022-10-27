class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        ans = len(nums)
        for idx, val in enumerate(nums):
            ans ^= idx ^ val
              
        return ans    
            
            
            
            
        
        