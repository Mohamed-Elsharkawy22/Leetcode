class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        int count=0;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
                count++;
            
            }else if(count>0 && s[i]==')'){
                count--;
            }else if(s[i]==')'){
                s[i]='?';
                
            }
            
        }
        count=0;
            for(int i=s.size()-1;i>=0;i--){
            
            if(s[i]==')'){
                count++;
            
            }else if(count>0 && s[i]=='('){
                count--;
            }else if(s[i]=='('){
                s[i]='?';
                
            }
            
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            
            if(s[i]!='?')ans.push_back(s[i]);
        }
        return ans;
        
        
    }
};