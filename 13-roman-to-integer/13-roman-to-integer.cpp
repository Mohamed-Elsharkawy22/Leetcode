class Solution {
public:
    int romanToInt(string s) {
        map<char, int>mp;
        
        mp['I']=1,mp['V']=5,mp['X']=10,mp['L']=50,mp['C']=100,mp['D']=500,
        mp['M']=1000;
        
        int ans=0;
        
        for(int i=0;i<s.size();i++){
            ans += mp[s[i]];
            
          if(i>0 && s[i-1]=='I'){
              if(s[i]=='V' || s[i]=='X' )
                  ans-=2;
          }else if(i>0 && s[i-1]=='X'){
              if(s[i]=='L' || s[i]=='C' )
                  ans-=20;
          }else if(i>0 && s[i-1]=='C')
              if(s[i]=='D' || s[i]=='M' )
                  ans-=200;
        }
        
        return ans;
        
    }
};