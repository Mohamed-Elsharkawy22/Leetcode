class Solution {
public:
    string longestPalindrome(string s) {
        
   
        int l=0,r=0,ans=0;
        for(int i=0;i<s.size();i++){
             
            int ans1=expandAroundCenter(s,i,i);
            int ans2=expandAroundCenter(s,i,i+1);    
            
            int mx=max(ans1,ans2);
            if(mx>ans){
                ans=mx;
                l= i-((ans+1)/2)+1;
                r= i+(ans/2);   
            }   
        }
        
        return s.substr(l, r-l+1);
        
    }
    
    
    int expandAroundCenter(string s, int left ,int right){
        
        int l=left, r=right;
        
        while(l>=0 && r<s.size() && s[l] == s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    
    
    
    
};