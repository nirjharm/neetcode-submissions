class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_product = nums[0]; 
        int l = nums.size();
        vector<int> prefix(l+1, 1);
        vector<int> suffix(l+1, 1);
        for(int i = 1; i <= l; i++)
        {
            prefix[i] = prefix[i-1] == 0? nums[i-1]: prefix[i-1] * nums[i-1];
            suffix[l - i] = suffix[l-i+1] == 0? nums[l-i]: suffix[l-i+1] * nums[l-i];
            max_product = max(max_product, suffix[l - i]);
            max_product = max(max_product, prefix[i]);
        }
        return max_product;
    }
};
