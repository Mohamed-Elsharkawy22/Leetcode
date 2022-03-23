class Solution {
public:
    int brokenCalc(int startValue, int target) {
      
        // the road from st to en is not deterministic
        // but from en to st is determinstic
        // from en to st we have to reverse the operations
        // while(en > st) 1- add one or 2- div by 2 to en
        // one observation if en is odd we have only to add one
        // if even we have to div by 2 only why?
        // we wanna minimize en to reach st
        // en is even, if we add 1, en will be odd
        // so we have to add again 1 then div by 2 to minimize en
        // (en +2) /2 ---> 3 operations
        // but this is the same as (en/2)+1 by this in 2 operations only,
        // so if it is even we must div by 2 only for less operations
        
        int ans=0;
        while(target > startValue){
            ans++;
            target = (target%2==0)?target/2:++target;
            
        }
        
        return ans+startValue-target;
        
        
      
    }
};