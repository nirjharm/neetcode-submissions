class Solution {
    int rsearch(vector<int>& nums, int l, int r, int t) {
        
        if(nums[l] > nums[r])
        {
            int m = (l+r)/2;
            int x = rsearch(nums, l, m, t);
            int y = rsearch(nums, m+1, r, t);
            
            if(x == -1)
                return y;
            return x;
        }

        while (l <= r) 
        {
            int m = (l + r) /2;
            if (nums[m] < t)
                l = m+1;
            else if (nums[m] > t)
                r = m-1;
            else
                return m;
        }
        return -1;
         
    }
public:
    int search(vector<int>& nums, int target) {
        return rsearch(nums, 0, nums.size()-1, target);
    }
};
 