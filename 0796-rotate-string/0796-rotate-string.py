class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        cnt =0
        while 1:
            cnt+=1
            if s == goal:
                return 1
            temp=s[len(s)-1] + s[:len(s)-1]
            s=temp
            if cnt == len(s):
                return 0