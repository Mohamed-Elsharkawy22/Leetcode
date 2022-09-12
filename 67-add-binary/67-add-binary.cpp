class Solution {
public:
    string addBinary(string a, string b) {
        
        if(a.size()>b.size())
           swap(a,b);
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        while(a.size()<b.size())
            a.push_back('0');
        
        
        string ans ="";
        int rem=0;
        
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                if(a[i]=='1'){
                    
                    if(rem == 1){
                        ans.push_back('1');
                        rem=1;
                    }else{
                         ans.push_back('0');
                        rem=1;
                    }
                    
                }else{
                    if(rem ==1)
                    {
                        ans.push_back('1');
                        rem=0;
                    }else{
                       ans.push_back('0');
                        rem=0; 
                    }
                    
                } 
                
            }else{
                if(rem==1){
                    ans.push_back('0');
                        rem=1;
                }else{
                    ans.push_back('1');
                        rem=0; 
                }
            }
            
            
        }
        if(rem)
            ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};


    