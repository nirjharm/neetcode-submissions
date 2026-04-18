class Solution {
public:
    bool isvalid(char a, char b)
    {
        string s(2, '0');
        s[0] = a;
        s[1] = b;
        int x = atoi(s.c_str());
        if (x >= 1 && x <= 26)
            return true;
        return false;
    }
    int numDecodings(string s) {
        int l = s.size();
        vector<int> g(l, 0);

        if(isvalid('0', s[0]))
            g[0] = 1;
        else
            return 0;

        for(int i = 1; i < l; i++) 
        {
            int v1 = 0, v2 = 0;
            if(isvalid('0', s[i]))
                v1 = 1;

            if(isvalid(s[i-1], s[i]))
                    if(s[i-1] != '0')
                        v2 = 1;

            if(i == 1)
            {   
                g[i] = (g[i-1] * v1)  + (v2);
            }
            else                
                g[i] = (g[i-1] * v1)+ (g[i-2] * v2);
        }

        return g[l-1];
    }
};
