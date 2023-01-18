class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int j=0;
        for(int i:nums)
        {
            mp[j] = i;
            j++;
        }
        int count = 0;
        for(int a=0;a<mp.size();a++)
        {
           int b =a+1;
           while(b<mp.size())
           {
               if(mp[a]==mp[b])
               {
                   count++;
               }
               b++;
           }
           b=1;
        }
        return count;
    }
};
