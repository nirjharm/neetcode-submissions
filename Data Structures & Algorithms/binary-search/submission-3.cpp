class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0; 
        int r = nums.size();
        while(l <= r)
        {
            if(l == r)
            {    
                if(nums[l] == target)
                    return l;
                else
                    break;
            }
            int m = (l+r)/2;
            if (nums[m] < target)
                l = m+1;
            else if(nums[m] > target)
                r = m;
            else
                return m;
        }
        return -1;
    }
};
