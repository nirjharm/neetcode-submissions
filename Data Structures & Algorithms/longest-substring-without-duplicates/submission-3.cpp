class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> m;
        int ss = 0; int l = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if (m.contains(s[i]) && m[s[i]] >= ss )
                ss = m[s[i]]+1;
            
            int sl = i - ss + 1;
            l = max(sl, l);
            m[s[i]] = i;
        }
        return l;

    }
};
