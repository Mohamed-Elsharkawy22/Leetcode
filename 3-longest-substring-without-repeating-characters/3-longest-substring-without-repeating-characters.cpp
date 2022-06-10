class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
      unordered_set<char>in;
        int st=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(in.find(s[i])==in.end()){
                in.insert(s[i]);
            }else{
                
               while(in.find(s[i])!=in.end()){
                   in.erase(s[st]);
                   st++;
               }
                in.insert(s[i]);
            }
            ans=max(ans, i-st+1);
        }
        
        return ans;
    }
};