class Solution {
public:
    
    bool isPalin(string &s, int st, int en){
        
        while(st<=en){
            if(s[st]!=s[en]) return 0;
            st++;
            en--;
        }
                
        return 1;
    }
    
    
    bool validPalindrome(string s) {
        
        int pt1=0, pt2=s.size()-1;   
        
     const int n=s.size();
        
       
        while(pt1<=pt2){
            
            if(s[pt1]!=s[pt2]){            
                return (isPalin(s,pt1+1,pt2) | isPalin(s,pt1,pt2-1));
            }
             pt1++;
             pt2--;
            
        }
        return 1;
    }
};