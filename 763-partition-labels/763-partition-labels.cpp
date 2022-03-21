class Solution {
public:
    vector<int> partitionLabels(string s) {
    // find last index of each char
    // maintain a st to know the start of each segment
    // maintain (mxEnd) to know the max reach for each segment(end of it)
    //mxEnd will be initiate to st (initial condition)
    // if mxEnd == (i (current iteration)), so it is the end of this segment
    // so st will equal to i+1 and (mxEnd will equal to st of this segment(inital condition));
        
        const int n=s.size();
        vector<int>index(26,0);
        for(int i=0;i<n;i++)
            index[s[i]-'a']=i;
            
        
        int st=0;
        int mxEnd=st;
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            mxEnd=max(mxEnd, index[s[i]-'a']);
            if(mxEnd==i){
                ans.push_back(i-st+1);
                st=i+1;
                mxEnd=st;
            }
        }
        
        return ans;
    }
};



