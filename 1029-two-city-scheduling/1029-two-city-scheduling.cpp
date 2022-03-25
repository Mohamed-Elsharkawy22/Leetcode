class Solution {
public:
    int dp[101][51];
    int twoCitySchedCost(vector<vector<int>>& costs) {
        memset(dp,-1,sizeof dp);
        
        return solve(0,0,costs);
    }
    
    
    int solve(int i, int numOfA, vector<vector<int>>& costs )
    {  if(numOfA > costs.size()/2){
           return 52000;
          }
        if(i==costs.size())
        {
            if(numOfA == costs.size()/2){
                return 0;
            }else{
                 return 52000;
            }
            
        }
        
        int &ret=dp[i][numOfA];
        if(~ret)
            return ret;
        
        ret=0;
        
        ret=solve(i+1,numOfA+1,costs)+costs[i][0];
        ret=min(ret, solve(i+1,numOfA,costs)+costs[i][1]);
        
        return ret;
        
    }
    
};