class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size();i++)
        {
            char j = s[i];
            if(mp.contains(j))
            {
                mp[j]++;
            }
            else
            {
                mp[j]=1;
            }
        }
        for(int i = 0; i < t.size();i++)
        {
            char j = t[i];
            if(mp.contains(j))
            {
                mp[j]--;
                if(mp[j] == 0)
                    mp.erase(j);
            }
            else
            { 
                return false;
            }
        }
        if(mp.size() != 0)
            return false;
        return true;
    }
};
