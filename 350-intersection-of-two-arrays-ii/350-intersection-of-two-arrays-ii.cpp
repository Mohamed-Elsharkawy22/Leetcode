class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size() > nums2.size())
            nums1.swap(nums2);
    
        sort(nums2.begin(), nums2.end());
       
        
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
           
            int lo=0,hi=nums2.size()-1;
            int v=nums1[i];
            while(lo<=hi){
                
                int mid=lo+(hi-lo)/2;
                
                if(nums2[mid]==v){
                    ans.push_back(v);
                    nums2[mid]=-1;
                    sort(nums2.begin(), nums2.end());

                    break;
                }else if(nums2[mid]>v)
                    hi=mid-1;
                else
                    lo=mid+1;
            }
            
        }
    
        return ans;
    }
};

