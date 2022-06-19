class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
     
        sort(products.begin(), products.end());
        
        
        vector<vector<string>>ans;
        vector<string>temp;
        
        string prefix="";
        for(int i=0;i<searchWord.size();i++){
            prefix += searchWord[i];
            temp.clear();
            
            for(int i=0;i<products.size();i++){
                if(prefix == products[i].substr(0, (int)prefix.size())){
                    temp.push_back(products[i]);
                }
                
                if(temp.size()==3)
                    break;
            }
            ans.push_back(temp);
            
        }
        
        
        return ans;
        
        
    }
};