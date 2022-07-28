class Solution {
public:
    bool isAnagram(string s, string t) {
      
        unordered_map<char,int>mp;
        
        int sz=0;
        for(int i=0;i<s.size();i++)
            mp[s[i]-'a']++;
        
        
        for(int i=0;i<t.size();i++)
        {
            if(mp.count(t[i]-'a')==0) 
                return 0;
            if(mp[t[i]-'a'] > 1) 
                mp[t[i]-'a']--;
            else
            {
            mp.erase(t[i]-'a');
            }
        }   
        
        return mp.size()==0;
        
    }
};