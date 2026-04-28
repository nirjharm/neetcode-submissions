class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for (int i: nums)
        {
            if(um.contains(i))
                um[i]++;
            else
                um[i] = 1;
        }
        using t = pair<int, int>;
        priority_queue<t, vector<t>, less<t>> max_heap;
        for(auto e: um)
        {
            max_heap.push({e.second, e.first})  ;
        }

        vector<int> r;
        for(int i = 0; i < k; i++)
        {
            r.push_back(max_heap.top().second);
            max_heap.pop();
        }
        return r;
    }
};
