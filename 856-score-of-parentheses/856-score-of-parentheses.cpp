class Solution {
public:
    int scoreOfParentheses(string s) {
    
          /*
          every (), its cost is 2^(number of not closed yet).
          so, if i found (), i add its cost;
          */
        int ans=0,
        numberOfNotClosedYet=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
                numberOfNotClosedYet++;
             
            }else{
                numberOfNotClosedYet--;
                
             if(s[i-1]=='(')ans+= 1<<numberOfNotClosedYet; 
                
            }
        }       
        
       return ans; 
    }
};

