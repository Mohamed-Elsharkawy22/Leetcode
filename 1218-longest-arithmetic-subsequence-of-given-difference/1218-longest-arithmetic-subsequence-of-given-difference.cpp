class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>mp;
        int ans=0;
        const int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(mp.count(arr[i]-difference) > 0){
                mp[arr[i]]=mp[arr[i]-difference]+1;
            }else{
                mp[arr[i]]=1;
            }
            
            ans=max(mp[arr[i]], ans);
        }
        return ans;
    }
};