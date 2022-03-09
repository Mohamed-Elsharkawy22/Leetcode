class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans=0;
        const int n=s.size();
        unordered_set<char> lookup;
        int start=0;
        for(int i=0;i<n;i++){
            
           while(lookup.find(s[i]) != lookup.end()){
               lookup.erase(s[start++]);
           } 
           lookup.insert(s[i]);
            ans=max(ans,(int)lookup.size());
        }
        
        return ans;
    }
};