class Solution {
public:
    int maximum69Number (int num) {
       
        int m = num;
        int idx=-1;
        int i=0;
        while(m){
            int lst=m%10;
            if(lst == 6){
                idx = i;
            }
            
            m/=10;
        i++;
        }
        
        
        if(idx == -1 )
            return num;
        
        return num + 3*pow(10,idx);
    }
};