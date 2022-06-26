class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
     
        const int n=cardPoints.size();
        vector<int>prefix(n+1,0);
        
         int mn=1e9+2;
        int kk=n-k;
        for(int i=1;i<=n;i++){
            prefix[i] = cardPoints[i-1]+ prefix[i-1];
            cout<<prefix[i]<<" ";
            if(i>=kk)
             mn=min(mn, prefix[i]-prefix[i-kk]);
        }
        
      return prefix[n]-mn;
        
    }
};


