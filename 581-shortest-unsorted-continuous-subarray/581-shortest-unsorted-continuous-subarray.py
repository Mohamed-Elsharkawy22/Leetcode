class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        
        stack = []
        first = len(nums)
        for i in range(len(nums)):
            while stack != [] and nums[stack[-1]] > nums[i]:
                first = min(first, stack[-1])
                del stack[-1]
              
            stack.append(i)    
            
            
        stack.clear()
        
        last=-1
        for i in range(len(nums)-1,-1,-1):
            while (stack and nums[stack[-1]] < nums[i]):
                last=max(last, stack[-1])
                stack.pop()
            stack.append(i)
            
       
        if last < first:
            return 0
        else:
            return last-first+1  