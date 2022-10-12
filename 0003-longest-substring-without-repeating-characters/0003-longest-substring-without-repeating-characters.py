class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st = set()
        ans = 0
        start = 0
        for idx, char in enumerate(s):
            while char in st:
                st.remove(s[start])
                start+=1
            ans = max(ans, idx-start+1)    
            st.add(char)
        return ans;    
                
            