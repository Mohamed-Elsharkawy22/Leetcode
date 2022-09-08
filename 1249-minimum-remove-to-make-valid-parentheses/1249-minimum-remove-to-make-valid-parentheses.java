class Solution {
    public String minRemoveToMakeValid(String s) {
       int cntOpenPara=0;
        
        StringBuilder ss = new StringBuilder(s);
        
        for(int i=0;i<s.length();i++){
            if(ss.charAt(i)=='(')
                cntOpenPara++;
            else if(ss.charAt(i) == ')'){
                if(cntOpenPara > 0){
                      cntOpenPara--;
                }else{
                    ss.setCharAt(i,'*');
                }
            }
           
        }
        
        cntOpenPara=0;
         for(int i=s.length()-1 ;i>=0;i--){
            if(ss.charAt(i)==')')
                cntOpenPara++;
            else if(ss.charAt(i) == '('){
                if(cntOpenPara > 0){
                      cntOpenPara--;
                }else{
                    ss.setCharAt(i,'*');
                }
            }
           
        }
        
        StringBuilder ans = new StringBuilder();
        
        for(int i=0;i<ss.length();i++){
            if(ss.charAt(i)=='*') continue;
            
            ans.append(ss.charAt(i));
        }
        
        
        return ans.toString();
        
        
    }
}