class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int, int>> s;
        vector<int> r(t.size(), 0);
        s.push({t[0], 0});
        for(int i = 1; i < t.size();i++)
        {
            while(!s.empty() && t[i] > s.top().first)
            {
                r[s.top().second] = i - s.top().second;
                s.pop();
            }
            s.push({t[i], i});
        }
        return r;
    }
};
