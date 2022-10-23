class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        item1 = 0
        sm = sum(nums)
        n = len(nums)
        nums.sort()
        for idx, item in enumerate(nums):
            if idx > 0 and item == nums[idx-1]:
                item1 = item
                break
                
        sm -= item1
        
        return [item1, (n*(n+1))//2 - sm]
            
        