class Solution {
public:
    bool backspaceCompare(string s, string t) {
       
        int skips=0;
        int skipt=0;
        int i= s.size()-1, j=t.size()-1;
        while( i >=0 || j >=0 ){
            
            while(i>=0){
               if(s[i]=='#')
                    i--,skips++;
                else if (skips){
                    i--;
                    skips--;
                }else break;
            }
            
            while(j>=0){
                if(t[j]=='#')
                    j--,skipt++;
                else if (skipt)
                    j--,skipt--;
                else break;
            }
            
            if(i >=0 && j>=0 && t[j]!= s[i]){
                return 0;
            }
            
            if(i<0 && j>=0 || j<0 && i>=0)
                return 0;
            
            i--,j--;
        }
        
        return 1;
        
        
        
    }
};