class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        dct = {}
        
        for val in strs:
            key = "".join(sorted(val))
            if key not in dct:
                dct[key] = list()
                dct[key].append(val)
            else:
                dct[key].append(val)
                
            
        ans = []
        for val1 in dct.values():
            ans.append(val1)
            
        return ans    