class Solution {
    public int numOfMinutes(int n, int headID, int[] manager, int[] informTime) {
        
        ArrayList<Integer> [] adj = new ArrayList[n];
        
         for(int i=0;i<n;i++)
            adj[i] = new ArrayList<Integer>();
             
        for(int i=0;i<n;i++){
           
            if(manager[i]!=-1)
                adj[manager[i]].add(i);
        }
        
        return dfs(headID, manager, informTime, adj);
    }
    
    public int dfs(int node, int[] manager, int[] informTime, ArrayList<Integer> [] adj ){
        
        int childCost=0;
        
        for(int val: adj[node]){
            
            childCost = Math.max(childCost, dfs(val, manager, informTime, adj));
        }
        
        return childCost+informTime[node];
    }
    
    
}