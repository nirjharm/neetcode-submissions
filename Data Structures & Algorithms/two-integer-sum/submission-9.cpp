class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;

        for (size_t i = 0; i < nums.size(); i++) 
        {
            um[nums[i]] = i;
        }
        int d;
        int i1, i2;
        for(int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            d = target - x;
            
            if (um.contains(d))
            {
                    if(um[d] == i)
                        continue;
                    i1 = i;
                    break;
            }
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == d && i1 != i)
            {   
                i2 = i;
                break;
            }   
        }
        return i1<i2? std::vector<int>{i1,i2}: std::vector<int>{i2,i1};

    }
};
