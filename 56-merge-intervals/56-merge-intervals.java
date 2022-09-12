class Solution {
    public int[][] merge(int[][] intervals) {
        
    Arrays.sort(intervals, (a1, a2)-> a1[0]-a2[0]);
      //  System.out.println(Arrays.deepToString(intervals));
    
        int st= intervals[0][0];
        int en = intervals[0][1];
        List<int[]> ans =new ArrayList<>();
        for(int i=1;i<intervals.length;i++){
            
            if(en >= intervals[i][0])
                en=Math.max(en, intervals[i][1]);
            else{
                ans.add(new int[]{st,en});
                st= intervals[i][0];
                en= intervals[i][1];
            }
                
        }
    ans.add(new int[]{st,en});
        
        return ans.toArray(new int[ans.size()][2]);
    
    }
}