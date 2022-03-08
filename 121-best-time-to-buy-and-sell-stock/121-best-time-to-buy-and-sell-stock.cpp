class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mxProfit=0;
        const int n=prices.size();
        vector<int>mx(n,0),mn(n,0);
    int mnSoFar=100005;
    for(int i=0;i<n;i++){
       mn[i]=min(mnSoFar, prices[i]);
        
        mnSoFar=min(mnSoFar,prices[i]);
    }
        
        int mxSoFar=0;
    for(int i=n-1;i>=0;i--){
       mx[i]=max(mxSoFar, prices[i]);
        
        mxSoFar=max(mxSoFar,prices[i]);
    }
    
        for(int i=0;i<n;i++){
           // cout<<mn[i]<<" "<<mx[i]<<endl;
            mxProfit=max(mxProfit,mx[i]-mn[i]);
            
        }
        
        return mxProfit;
    }
    
};