class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        
        dct = {0:0}
        sum = 0
        for idx, val in enumerate(nums):
            sum += val
            if dct.get(sum%k, -1) == -1:
                dct[sum%k] = idx+1
            else:
                if (idx+1) - dct[sum%k] > 1:
                    return True;
            
            
        return False     
        
        
      