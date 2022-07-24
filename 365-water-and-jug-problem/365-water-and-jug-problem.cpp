class Solution {
public:
    bool canMeasureWater(int x,int y,int z) {
        map<pair<int,int>,int >m;
        m[{0,0}]++;
        queue<pair<int,int>>q;
        if(x+y<z)return false;
        q.push({0,0});
        while(!q.empty()){
            int f=q.front().first;
            int s=q.front().second;
            q.pop();
            if(f+s==z)return true;
            if(m.count({x,s})==0){
                q.push({x,s});
                m[{x,s}]++;
            }
            if(m.count({f,y})==0){
                m[{f,y}]++;
                q.push({f,y});
            }
            if(m.count({0,s})==0){
                m[{0,s}]++;
                q.push({0,s});
            }
            if(m.count({f,0})==0){
                m[{f,0}]++;
                q.push({f,0});
            }
            if(s<y){
                int left=min(f,y-s);
                pair<int,int>nx={f-left,s+left};
                if(m.count(nx)==0){
                    m[nx]++;
                    q.push(nx);
                }
                
            }
            if(f<x){
                int left=min(s,x-f);
                pair<int,int>nx={f+left,s-left};
                       if(m.count(nx)==0){
                    m[nx]++;
                    q.push(nx);
                }
                
            }
            
        
        }
        return  false;
        
    }
};