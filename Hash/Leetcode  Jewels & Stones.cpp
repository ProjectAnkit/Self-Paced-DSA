class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>S;
        int count =0;
        
        for(char a:jewels)
        {
            S.insert(a);
        }
        
        for(char b:stones)
        {
        if(S.count(b))
        {
            count++;
        }
        }
       return count;
    }
};
