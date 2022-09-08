class Solution {
    
    boolean isPalind(String s, int st, int en){
        
        while(st<=en){
            if(s.charAt(st) == s.charAt(en)){
                st++;
                en--;
            }else
                return false;
        }
        
        return true;
    }
    

    public boolean validPalindrome(String s) {
      int st=0; 
      int en=s.length()-1;
        
        
        while(st<en){
             if(s.charAt(st) == s.charAt(en)){
                st++;
                en--;
             }else{   
                 return isPalind(s, st+1,en) | isPalind(s, st,en-1);
             } 
        }
    return true;
    }
}