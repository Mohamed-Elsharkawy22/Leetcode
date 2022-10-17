class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        ans = 0
        for char in sentence:
            ans |= ( 1 << (ord(char) - ord('a')) )
                
        return ans == (1<<26)-1