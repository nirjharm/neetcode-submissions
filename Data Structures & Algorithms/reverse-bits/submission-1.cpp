class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int r = 0x00000000;
        for(int i = 0; i < 32; i++)
        {
            int j = n & 1;
            n >>= 1;
            r <<= 1;
            r |= j;
            
        }
        return r;
    }
};
