class Solution {
public:

    int minsearch(vector<int>& nums, int l, int r) {
        
        if(nums[l] > nums[r])
        {
            int m = (l+r)/2;
            int x = minsearch(nums, l, m);
            int y = minsearch(nums, m+1, r);
            return min(x,y);
        }

        return nums[l];
         
    }

    int findMin(vector<int> &nums) {
        return minsearch(nums, 0, nums.size()-1);
    }
};
