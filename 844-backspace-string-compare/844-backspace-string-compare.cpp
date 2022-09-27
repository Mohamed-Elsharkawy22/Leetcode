class Solution {
public:
    bool backspaceCompare(string s, string t) {
      
        
        
        int i =s.size()-1, j = t.size()-1;
        int skips=0, skipt=0;
        
        while(i>=0 || j>=0){
            
            while(i>=0){
                
                if(s[i]=='#')
                {
                    i--, skips++;
                }else if(skips){
                    i--;
                    skips--;
                }else{
                    break;
                }
            }
            while(j>=0){
                
                if(t[j]=='#')
                {
                    j--, skipt++;
                }else if(skipt){
                    j--;
                    skipt--;
                }else{
                    break;
                }
            }
            
            if(i>=0 && j<0 || j>=0 && i<0 )
                return 0;
            
            
            if(i>=0 && j>=0 && s[i]!=t[j])
                return 0;
            
            i--,j--;
        }
        
        
        return 1;
        
    }
    
   
    
};