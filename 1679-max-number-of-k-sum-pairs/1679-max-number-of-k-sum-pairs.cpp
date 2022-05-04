class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        const int n= nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            
            int complement = k- nums[i];
            
            if(mp[complement]>0){
                ans++;
                mp[complement]--;
            }else{
                 mp[nums[i]]++;
            }
        }
        
        return ans;
        
    }
};