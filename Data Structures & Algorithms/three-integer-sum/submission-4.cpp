class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<vector<int>> res;
        for(int i = 0; i< len-2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int l = i;
            int m=l+1, r =len-1;
            int sum;
            while(m < r)
            {
                sum = nums[l] + nums[m] + nums[r];
                if(sum < 0)
                    m++;
                else if (sum > 0)
                    r--;
                else{
                    res.push_back({nums[l],nums[m],nums[r]});
                    r--;
                    m++;
                    while (m < r && nums[m] == nums[m-1])
                        m++;
                }

            } 
        }
        return res;
    }
};
