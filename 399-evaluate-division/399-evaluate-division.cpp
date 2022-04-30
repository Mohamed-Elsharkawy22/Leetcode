class Solution {
public:
   
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
     
        map<string, int> mp;
        const int n=equations.size();
        vector<vector<double>>cost(50,vector<double>(50,1.0*INT_MAX));
      
        
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
        
        for(int k=1;k<=mp.size();k++){ //floyed warshall
            for(int i=1;i<=mp.size();i++){
                for(int j=1;j<=mp.size();j++){
                    
                    if(cost[i][k] < 1.0*INT_MAX && cost[k][j]< 1.0*INT_MAX)                 
                       cost[i][j]=min(cost[i][j], cost[i][k]*cost[k][j]);
                }
            }
        }
        
        for(int i=0;i<queries.size();i++){
             int n1=mp[queries[i][0]];
             int n2=mp[queries[i][1]];
            
            if(mp.count(queries[i][0])== 0 || mp.count(queries[i][1])==0 || cost[n1][n2]== 1.0*INT_MAX )
                ans.push_back(-1.0);
            else{
                ans.push_back(cost[n1][n2]);
            }
        }
        return ans;
        
    }
};