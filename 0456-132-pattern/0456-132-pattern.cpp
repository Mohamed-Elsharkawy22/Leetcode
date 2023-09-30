class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>st;
        // s1, s1, s3
        // if we looked from behind
        // s2 should be the max
        // s3 should be the 2nd max;
        // to make s1 less than s3 we should maximize s3 and make sure it is
        // less than s2.

        int s3 = INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){

            if(nums[i] < s3)
                return true;

            while(st.size() > 0 && st.top() < nums[i]){
                s3 = st.top();
                st.pop();    
            }

            st.push(nums[i]);
        }

        return false;
    }
};