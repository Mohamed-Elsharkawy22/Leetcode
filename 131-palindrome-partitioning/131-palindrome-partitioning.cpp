class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        
       generate(0,temp,ans,s);
        return ans;
    }
    
    void generate(int st, vector<string>&temp, vector<vector<string>>&ans, string s){
        
        if(st==s.size()){
            ans.push_back(temp);
            
            return ;
        }
        
        
        for(int i=st;i<s.size();i++){
            
            if(isPalindrome(s,st,i)){
                
                temp.push_back(s.substr(st,i-st+1));
                generate(i+1,temp,ans,s);
                temp.pop_back();
                
            }
            
        }
        
        
        
    }
    
    
    bool isPalindrome(const string &s, int st,int en){
        
        while(st<=en&&s[st]==s[en]){
            st++;
            en--;
        }
        
        if(st>en){
            return 1;
        }else
            return 0;
        
    }
    
    
    
};