class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int len = n.size();
        int r = len-1, l = 0;
        while (r != l)
        {
            if(n[l] + n[r] < target)
            {    
                l++;
            }
            else if(n[l] + n[r] > target)
            {
                r--;
            }    
            else
            {
                break;
            }
        }
        l++;
        r++;
        vector<int> ret;
        ret.push_back(l);
        ret.push_back(r);
        return ret;
    }
};
