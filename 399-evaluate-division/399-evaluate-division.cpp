class Solution {
public:
    double cost[50][50];
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
     
        map<string, int> mp;
        const int n=equations.size();
       // vector<vector<double,double>>cost(2*n,vector<double>(2*n,1.0*INT_MAX));
        for(int i=0;i<50;i++)
            for(int j=0;j<50;j++)
               cost[i][j]=1.0*INT_MAX;
        
        vector<double>ans; 
        
        int idx=0;
        for(int i=0;i<n;i++){
            if(mp.count(equations[i][0]) == 0)
                mp[equations[i][0]]= ++idx;
             if(mp.count(equations[i][1]) == 0)
                mp[equations[i][1]]= ++idx;
            
            
            int from =  mp[equations[i][0]];
            int to = mp[equations[i][1]];
            
            cost[from][from] = 1.0;
            cost[to][to]=1.0;
            
            cost[from][to]= values[i];
            cost[to][from] = 1.0/ values[i];
            
        }
        
        for(int k=1;k<=mp.size();k++){
            
            for(int i=1;i<=mp.size();i++){
                for(int j=1;j<=mp.size();j++){
                    cost[i][j]=min(cost[i][j], cost[i][k]*cost[k][j]);
                }
            }
        }
        
        for(int i=0;i<queries.size();i++){
             int n1=mp[queries[i][0]];
                int n2=mp[queries[i][1]];
            if(mp.count(queries[i][0])==0 || mp.count(queries[i][1])==0 ||cost[n1][n2]>= 500 )
                ans.push_back(-1.0);
            else{
                ans.push_back( cost[n1][n2]);
            }
        }
        return ans;
        
    }
};