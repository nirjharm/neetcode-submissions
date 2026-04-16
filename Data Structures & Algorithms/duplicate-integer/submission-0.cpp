class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for (int j =0; j < nums.size(); j++)
        {
            int i = nums[j];
            if(mp.contains(i))
                return true;
            mp.insert({i, true});
        }
        return false;
    }
};