class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        
        unordered_map<int,int>mp;
        mp[0]=-1; // index of zero is -1
        
        
        int sum=0;
        int mx=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i]==0?-1:1;
            
            if(mp.count(sum)){
                mx=max(mx, i-mp[sum]);
                //bc i want to find longest, i did update mp[sum]
            }else{
                mp[sum]=i;
            }   
        }
        
        
        return mx;
    }
};