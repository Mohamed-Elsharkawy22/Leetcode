class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dct = {}
        ans = 0
        for char in s:
            while char in dct:
                key = next(iter(dct))
                del dct[key]
            dct[char] = 1    
            ans = max(ans, len(dct))    
        return ans;    
                
            