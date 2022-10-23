class Solution:
    def minWindow(self, s: str, t: str) -> str:
        
        dctT = Counter(t)
        
        ans = float("inf"), None, None
        l=0
        r=0
        
        required = len(dctT)
        
        cnt = 0
        
        countS ={}
            
        while r < len(s):
            countS[s[r]] = countS.get(s[r], 0) + 1
            
            if s[r] in dctT and countS[s[r]] == dctT[s[r]]:
                cnt += 1
            
            while l <= r and cnt == required:
                if ans[0] > r-l+1:
                    ans = (r-l+1, l, r)
                
                countS[s[l]] -= 1
                
                if s[l] in dctT and countS[s[l]] < dctT[s[l]]:
                    cnt -= 1
                
                l +=1
                
            r += 1
        if ans[0]== float("inf"):
            return ""
        else:
            return s[ans[1]:ans[2]+1]
                