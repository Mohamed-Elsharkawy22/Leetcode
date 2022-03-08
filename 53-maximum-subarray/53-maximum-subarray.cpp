class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<long long> pfx(n + 1,0);  // prefix sum array initially filled with 0's
	for (int i = 1; i <= n; i++){
		pfx[i] = pfx[i - 1] + nums[i-1];  // compute the prefix sum at each element
	}

	long long max_subarray_sum =-100004 ;
	long long min_prefix_sum = 0;
	for (int i = 1; i <= n; i++) {
		// Max subarray sum is the maximum difference between two prefix sums
		max_subarray_sum = max(max_subarray_sum, pfx[i] - min_prefix_sum);
		min_prefix_sum = min(min_prefix_sum, pfx[i]);
	}
        return max_subarray_sum;
    }
};