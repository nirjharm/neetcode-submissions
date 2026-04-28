class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp = prices[0]; int mp = 0;
        for(int x: prices)
        {
            if (x < bp)
            {
                bp = x;
                continue;
            }
            if (x - bp > mp)
                mp = x-bp;
        }
        return mp;
    }
};
