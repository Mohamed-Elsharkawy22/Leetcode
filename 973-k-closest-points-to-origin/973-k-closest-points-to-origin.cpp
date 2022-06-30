class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      
        sort(points.begin(), points.end(),[](vector<int>v1, vector<int>v2){
          int x1=v1[0], y1=v1[1];
          int x2=v2[0], y2= v2[1];
           
           return ((x1*x1+y1*y1)<(x2*x2+y2*y2));
           
       });// nlogn
                
        return vector<vector<int>>(points.begin(), points.begin() + k);//k
    }
};

