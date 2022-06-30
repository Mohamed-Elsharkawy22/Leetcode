class Solution {
public:
    int minMoves2(vector<int>& nums) {
     
        const int n=nums.size();
        int sum=0;
        sort(nums.begin(), nums.end());
       
        
        int median=n/2;
        int ans=0;
        
        for(int i=0;i<n;i++){
            ans += abs(nums[median]-nums[i]);
        }
        
        return ans;
        
    }
};


    
