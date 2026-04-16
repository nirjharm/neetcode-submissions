class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> presum(l), postsum(l), res(l);
        
        presum[0] = nums[0];
        for(int i = 1; i < l;i++)
            presum[i] = nums[i] * presum[i-1];

        postsum[l-1] = nums[l-1];
        for(int i = l-2; i >= 0;i--)
            postsum[i] = nums[i] * postsum[i+1];

        res[0] = postsum[1];
        res[l-1] = presum[l-2];
        for(int i = 1; i <  l-1; i++)
            res[i] = presum[i-1] * postsum[i+1];
        return res;
    }
};
