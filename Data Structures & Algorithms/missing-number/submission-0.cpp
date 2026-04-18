class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = nums.size();
        int res = 0;
        for(int i = 0; i < l + 1; i++)
        {
            res ^= i;
            if(i != l)
                res^= nums[i];
        }
        return res;
    }
};
