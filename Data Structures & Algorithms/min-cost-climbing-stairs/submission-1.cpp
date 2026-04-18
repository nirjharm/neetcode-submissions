class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int l = cost.size();
        vector<int> m(l+1, 0);
        m[0] = 0;
        m[1] = 0;
        for(int i = 2; i < l+1; i++)
        {
            m[i] = min(m[i-1] + cost[i-1], m[i-2] + cost[i-2]);
        }
        return m[l];
    }
};
