class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int>&v1,const vector<int>&v2){
            return v1[1]>v2[1];
        });
        
        int ans=0;
        for(int i=0;i<boxTypes.size();i++){
            if(truckSize>boxTypes[i][0]){
                truckSize -=  boxTypes[i][0];
                ans += (boxTypes[i][0]*boxTypes[i][1]);
            }else{
                ans += (truckSize*boxTypes[i][1]);
                break;
            }
        }
        
        return ans;
    }
};


