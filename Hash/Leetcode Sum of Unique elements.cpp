class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());

        for(int i=min;i<max;i++)
        {
           mp[i]=0;
        }

        for(int i:nums)
        {
            mp[i]++;
        }

        for(auto i:mp)
        {
            if(i.second==1)
            {
              sum = sum + i.first;
            }
        }
        return sum;
    }
};
