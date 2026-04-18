class Solution {
public:
    int rob(vector<int>& nums) {
        int l = nums.size();
        vector<int> mp(l, 0);

        mp[0] = nums[0];
        mp[1] = max(mp[0], nums[1]);
        for(int i = 2; i < l; i++)
        {
            mp[i] = max(mp[i-1], mp[i-2] + nums[i]);
        }
        return mp[l-1];
    }
};
