class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector< int > temp;
        vector< vector< int > > ans;
        
        unordered_map< int, int > count;
        
        const int sz= nums.size();
        
        for(int i=0;i<sz;i++){
            count[nums[i]]++;
        }
        
        permute(temp, ans, count, sz);
        
        return ans;
    }
    
    
    void permute(vector<int> &temp, vector<vector<int>>&ans, unordered_map< int, int > &count, int sz ){
        
        if(temp.size()==sz){
            
            ans.push_back(temp);
            return ;
        }
        
        
       for(auto pair: count){
           int val = pair.first;
           if(count[val] == 0) continue;
           
           temp.push_back(val);
           count[val]--;
           permute(temp, ans, count, sz);
           count[val]++;
           temp.pop_back();      
           
           
       }
        
        
        
    }
    
    
    
};