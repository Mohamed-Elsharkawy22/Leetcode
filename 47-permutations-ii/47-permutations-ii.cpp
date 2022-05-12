class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector< int >temp;
        vector< vector< int> > ans;
      unordered_map<int,int>count;
        
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        int sz=nums.size();
        bt(temp, ans, sz,count);
       
        return ans;
        
    }
    
    void bt(vector<int> &temp, vector<vector<int>> &ans,int sz  ,unordered_map<int,int> &count){
        
        if(temp.size()==sz){
            ans.push_back(temp);
            return ;
        }
        
        for(auto pair: count){
            int val=pair.first;
          if(count[val]==0) continue;
            temp.push_back(val);
            count[val]--;
            bt(temp,ans,sz,count);
             count[val]++;
            temp.pop_back();            
        }
        
        
        
        
        
        
    }
    
    
};





