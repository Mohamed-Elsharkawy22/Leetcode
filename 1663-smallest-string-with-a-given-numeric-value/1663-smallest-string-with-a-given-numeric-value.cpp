class Solution {
public:
    string getSmallestString(int n, int k) {
       
        string ans(n,'a');
        k-=n;
        int index = n-1;

//         while(k>0){
//            if(k >= 25){ 
//              ans[index--] = (char) (25+'a');
//                    k -= 25;
//            }else{
//                ans[index] = (char)(k+'a');
//                k=0;
//            }
        
//         }
        while(k>0){
           ans[index--] += min(25, k);
             k -= min(25 , k); 
        
        }
    
        return ans;
        
    }
};




