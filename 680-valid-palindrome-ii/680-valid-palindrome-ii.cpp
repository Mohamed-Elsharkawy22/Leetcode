class Solution {
public:
    
    bool isPalin(string &s, int st, int en){
        
        while(st<=en && s[st]==s[en]){
            
            st++;
            en--;
        }
        if(en<=st) return 1;
        
        return 0;
    }
    
    
    bool validPalindrome(string s) {
        
        int pt1=0, pt2=s.size()-1;   
        
     const int n=s.size();
        
        int cnt=0;
        while(pt1<=pt2){
            
          
            
            if(s[pt1]==s[pt2]){
                pt1++;
                pt2--;
            }else{
                cnt++;
                if(cnt>1)
                    return 0;
              
                return (isPalin(s,pt1+1,pt2) | isPalin(s,pt1,pt2-1));
            }
        }
        return 1;
    }
};