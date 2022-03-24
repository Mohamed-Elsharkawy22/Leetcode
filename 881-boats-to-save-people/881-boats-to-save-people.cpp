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
            
            while(cnt &&lim  && !s.empty() ){
                
               //cout<<s.size()<<" "<<lim<<endl;
                
             std:: multiset<int>::iterator it = s.lower_bound(lim);
                
                //for(int v:s){
                  //  cout<<"iam set "<<v<<endl;
                    
                //}
               //cout<<"ii "<<*it<<endl;
                
                if(it != s.end() && *it <= lim){
                 //   cout<<"hi 1\n";
                    lim -= *it;
                    s.erase(it);
                    cnt--;
                    
                }else{
                    if(it==s.begin()) break;
                    --it;
                   // cout<<"in 2"<<*it<<endl;
                    if(*it <= lim ){ 
                    //cout<<"hi 2\n";
                    
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




