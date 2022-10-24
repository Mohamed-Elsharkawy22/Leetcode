class Solution {
public:
    int maxLength(vector<string>& arr) {
        
          return  solve(0,0,arr); 
    }
    
    
    
    int solve(int i, int mask, vector<string>& arr){
        
        if(i==arr.size())
            return 0;
        
        int ans =0;
        
        ans = solve(i+1,mask, arr);
        
        
        bool can = 1;
        int newmask = 0;
        for(int j=0;j<arr[i].size();j++){
             if( (mask & (1<<(arr[i][j]-'a'))) != 0 || (newmask & (1<<(arr[i][j]-'a'))) !=0)
             {
                 can = 0;
                 break;
             }
             newmask |= (1<<(arr[i][j]-'a'));
        }
        if(can){
            mask |= newmask;
            ans = max(ans, (int)arr[i].size()+solve(i+1, mask, arr));
        }
        
        
        return ans;
        
    }
    
    
    
    
};