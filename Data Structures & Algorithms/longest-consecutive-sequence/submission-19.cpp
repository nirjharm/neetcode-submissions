class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ml = 0;
        unordered_set<int> m(nums.begin(), nums.end());

        for(int n: nums)
        {
            if(!m.contains(n - 1))
            {
                int l = 1; 
                while(m.contains(n+l))
                    l++;
                ml = max(ml, l);
            }
        }
        return ml;
    }
};
