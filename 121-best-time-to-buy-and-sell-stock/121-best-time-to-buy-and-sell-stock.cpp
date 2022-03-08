class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mxProfit=0;
        const int n=prices.size();
        
        /*
           mxProfit= (prices[i]-price[j]) ; (i > j) 
           ////////////////////////////////
           to maximize the profit we must minimize the price[j] and maximize the price[i]
           price[i] must be a value from prices, so we try all possible values as we traverse
           maintaing the mnSoFar (price[j]) before the current price[i]
           /////////////////////////////////////////
           
           i am now at arbitrary prices[i] 
           
          what is the best value for price[j] now?
          
          ans: the minimum value before the price[i] 
          
           so we maintain the minimum sofar as we traverse the prices 
            maximizing the profit.
           
           */
        
    int mnSoFar=100005; 
    for(int i=0;i<n;i++){ 
        mnSoFar=min(mnSoFar, prices[i]);
        mxProfit=max(mxProfit, prices[i]-mnSoFar);
    }
                
        return mxProfit;
    }
    
};