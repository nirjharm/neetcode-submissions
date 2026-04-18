class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        for(int i = 0; i < 32; i++)
        {
            int j = n & 0x00000001;
            count += j;
            n = n >> 1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> r;
        for(int i = 0; i <= n; i++)
        {
            r.push_back(hammingWeight(i));
        }
        return r;
    }
};
