class Solution {
public:
    string countAndSay(int n) {
        string ans="";
        string old="1";
          
        for(int i=1;i<n;i++){
            ans = "";
            for(int k=0;k<old.size();k++){
                 char now = old[k];
                 int j=k;
                 int cnt=0;
                 while(old[j]==now){
                     cnt++;
                     j++;
                  }
                k+=(cnt-1);
                ans += to_string(cnt);
                ans.push_back(now);
                
            
            }
            old=ans;
        }
        
        return old;
    }
};


