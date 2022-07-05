class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>st;
        
        for(int i=0;i<nums.size();i++) st.insert(nums[i]);
        
        int ans=0;
        for(int val : st){
            int len=1;
            int v=val+1;
            while( st.find(v) != st.end()){
                st.erase(v++);
                len++;
            }
            v=val-1;
              while( st.find(v) != st.end()){
                st.erase(v--);
                len++;
            }
            
            ans=max(len,ans);
        }
        
       return ans; 
        
    }
};

                   