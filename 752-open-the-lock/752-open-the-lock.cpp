class Solution {
public:
    long long turnBitsOn(long long msk,long long idx,long long number)
    {
        return msk | number<<(4*idx);
    }
    long long turnBitsOff(long long msk,int idx)
    {
        return msk & ~(15<<(4*idx));
    }
    long long getBits(long long msk,int idx)
    {
        return (msk & (15<<(4*idx)))>>(4*idx);
    }
    int openLock(vector<string>& deadends, string target) {
        unordered_map<int,int> deadends_map;
        unordered_map<int,int> vis;
        long long target_msk = 0;

        for(int i = 0; i<4; ++i)
        {
            target_msk = turnBitsOn(target_msk,i,target[i]-'0');
        }

        for(auto deadend:deadends)
        {
            int msk = 0;
            for(int i = 0;i<4;++i)
            {
                msk = turnBitsOn(msk,i,deadend[i]-'0');
            }
            if(msk==0 || msk == target_msk)
                return -1;
            deadends_map[msk] = 1;
        }
        queue<pair<int,int>> q;
        q.emplace(0,0);
        vis[0] = 1;
        while(!q.empty())
        {
            int msk = q.front().first;
            int dis = q.front().second;
            q.pop();
            
            if(msk==target_msk)
                return dis;
            
            for(int i = 0; i<4; ++i)
            {
                long long curr_digit = getBits(msk,i);
                for (int d = -1; d <= 1; d += 2) 
                {
                    int digit = (curr_digit + d + 10)%10;
                    int temp_msk = turnBitsOff(msk,i);
                    temp_msk = turnBitsOn(temp_msk,i,digit);
                   
                    if(deadends_map.find(temp_msk)==deadends_map.end() && 
                       vis.find(temp_msk) == vis.end())
                    {
                        q.emplace(temp_msk,dis+1);
                        vis[temp_msk] = 1;
                    }
                }   
            }
            
        }
        return -1;
    }
};