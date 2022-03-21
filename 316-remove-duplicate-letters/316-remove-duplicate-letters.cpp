class Solution {
public:
    string removeDuplicateLetters(string s) {
      
        vector<int>counts(26,0);
        vector<int>visited(26,0);
        
        const int n=s.size();
        
        string ans="";
        
        for(int i=0;i<n;i++)
            counts[s[i]-'a']++;
        
        
        
        for(int i=0;i<n;i++){
            
            counts[s[i]-'a']--;
            
            if(!visited[s[i]-'a']){
                while(ans.size()>0 && counts[ans.back()-'a'] > 0 && ans.back() > s[i]){            
                  visited[ans.back()-'a']=0;  
                    ans.pop_back();
                }
            
                visited[s[i]-'a']=1;
                ans.push_back(s[i]);
                
            }
            
        }
            
         return ans;   
               
        
    }
};