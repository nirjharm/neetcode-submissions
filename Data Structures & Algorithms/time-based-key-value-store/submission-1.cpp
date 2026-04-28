class TimeMap {

    unordered_map<string, pair<vector<int>, vector<string>>> k;
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        //see if exists
        if(!k.contains(key))
        {
            k[key] = {vector<int>{timestamp}, vector<string>{value}};
        }
        else
        {
            k[key].first.push_back(timestamp);
            k[key].second.push_back(value);
        }

    }
    
    string get(string key, int timestamp) {
        if(!k.contains(key))
        {
            return "";
        }
        else
        {
            int idx = upper_bound(k[key].first.begin(),k[key].first.end(), timestamp) - k[key].first.begin();
            if (idx == 0)
                return "";
            return k[key].second[idx - 1];
        }

    }
};
