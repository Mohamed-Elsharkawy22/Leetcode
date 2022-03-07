class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        
        int n = arr.size();
        unordered_map<int,int>dp;
    // for(int i=0;i<n;i++)
    // dp[arr[i]]=1; // wrong we need the previous values before arr[i] and this may give be next values        
        
	int ans =0;
        
	for(int i=0;i<n;i++){
		if(dp.count(arr[i]-difference)){// count doesnt create a  copy in the map
            
		  dp[arr[i]] = dp[arr[i]-difference]+1;
            
		}else{
            dp[arr[i]]=1;
        }
		ans=max(ans, dp[arr[i]]);

	}
       
	return ans;
        
    }
};