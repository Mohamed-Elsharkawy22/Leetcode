class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        multiset<int>s;
        
        for(int i=0;i<people.size();i++){
            s.insert(people[i]);            
        }
        
        int ans=0;
        int lim=limit;
        int cnt=2;
        while(!s.empty()){
            
            while(cnt &&lim&& !s.empty() ){
                
               
                
             std:: multiset<int>::iterator it = s.lower_bound(lim);
                
                if(it != s.end() && *it <= lim){
                    lim -= *it;
                    s.erase(it);
                    cnt--;
                    
                }else{
                    if(it==s.begin()) break;
                    --it;
                    if(*it <= lim ){ 
                    lim -= *(it);
                    s.erase((it));  
                        cnt--;
                }
                    ++it;
                }
                
            }
            lim=limit;
            ans++;
            cnt=2;
            
            
        }
        
        return ans;
        
        
        
    }
};




