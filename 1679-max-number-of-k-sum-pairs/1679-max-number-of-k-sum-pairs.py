class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        ans=0
        mp = {}
        for val in nums:
            complement = k-val
            if complement in mp and mp[complement]:
                ans+=1
                mp[complement]-=1
            else:
                mp[val]= mp.get(val, 0)+1
        return ans       