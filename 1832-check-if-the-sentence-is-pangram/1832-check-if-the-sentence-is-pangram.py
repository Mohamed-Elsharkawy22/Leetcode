class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        st = set() #max sz is 26 so o(1) space
        for char in sentence:
            st.add(char)
                
        return len(st)==26