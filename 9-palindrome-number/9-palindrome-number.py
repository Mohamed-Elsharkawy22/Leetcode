class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        return str(x) == "".join(list(reversed(str(x))))
        