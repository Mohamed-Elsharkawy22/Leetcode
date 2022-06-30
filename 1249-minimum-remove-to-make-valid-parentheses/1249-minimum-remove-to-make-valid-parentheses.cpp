class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
      int cnt=0;  
        
      const int n=s.size();
        
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
             else if(cnt > 0 && s[i]==')') cnt--;
             else if(cnt==0 && s[i]==')') s[i]='*'; 
        }
        cnt=0;
         for(int i=n-1;i>=0;i--){
            if(s[i]==')') cnt++;
             else if(cnt > 0 && s[i]=='(') cnt--;
             else if(cnt==0 && s[i]=='(') s[i]='*'; 
        }
        
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]!='*') res.push_back(s[i]);
            
        }
        
        return res;
    }
};


