class Solution {
    public String minRemoveToMakeValid(String s) {
      
        StringBuilder ss = new StringBuilder(s);
        Stack<Integer> st = new Stack<>();
        
        
        for(int i=0;i<ss.length();i++){
            
              if(ss.charAt(i)=='(')
                  st.push(i);
              else if(ss.charAt(i)==')')
              {
                  if(st.isEmpty())
                      ss.setCharAt(i,'*');
                  else
                      st.pop();
              }
        }
        
        while(!st.isEmpty()){
            ss.setCharAt( st.pop() ,'*');
        }
        
        StringBuilder ans = new StringBuilder();
        
        for(int i=0;i<ss.length();i++)
        {
            if(ss.charAt(i)=='*') continue;
            
            ans.append(ss.charAt(i));
        }
        
        
        return ans.toString();
        
    }
}