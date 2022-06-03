class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        vector<int>vis(26,0);
        vector<int>freq(26,0);
        
        const int n=s.size();
        for(int i=0;i<n;i++)
            freq[s[i]-'a']++;
        
        string ans="";
        for(int i=0;i<n;i++){
            
            freq[s[i]-'a']--;
            
            if(!vis[s[i]-'a']){
                
                while(ans.size()>0 && freq[ans.back()-'a']>0 && ans.back() > s[i])
                {
                    vis[ans.back()-'a']=0;
                    ans.pop_back();
                }
                
                vis[s[i]-'a']=1;
                ans.push_back(s[i]);
                
            }
            
        }
        return ans;
    }
};
