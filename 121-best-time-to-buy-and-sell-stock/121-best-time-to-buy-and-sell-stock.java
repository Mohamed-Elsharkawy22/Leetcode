class Solution {
    public int maxProfit(int[] prices) {
        
        int mnSoFar=100007;
        int ans=0;
        
        for(int i=0;i<prices.length;i++){
            ans=Math.max(prices[i]-mnSoFar, ans);
            mnSoFar=Math.min(mnSoFar, prices[i]);
        }
        
        return ans;
    }
}


