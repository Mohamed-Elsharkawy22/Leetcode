class Solution {
public:
    string getSmallestString(int n, int k) {
    
       
        string v="";
        for(int i=0;i<n;i++)
            v.push_back('a');
        
        k-=n;
        int index = n-1;

        while(k>0){
           if(k >= 25){ 
             v[index--] = (char) (25+'a');
                   k -= 25;
           }else{
               v[index] = (char)(k+'a');
               k=0;
           }
        
        }
    
        return v;
        
    }
};




