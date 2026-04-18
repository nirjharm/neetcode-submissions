class Solution {
public:
    int robbase(vector<int>& nums) {
        int l = nums.size();
        vector<int> mp(l, 0); 

        mp[0] = nums[0];
        mp[1] = max(mp[0], nums[1]); 
        for(int i = 2; i < l ; i++)
        {
            mp[i] = max(mp[i-1], mp[i-2] + nums[i]);
        }
        return mp[l-1];
    }

    int rob(vector<int>& nums) {

        if(nums.size() == 1)
            return nums[0];

        vector<int> nums2(nums);
        nums.erase(nums.end());
        nums2.erase(nums2.begin());
        return max(robbase(nums), robbase(nums2));
    }
};
