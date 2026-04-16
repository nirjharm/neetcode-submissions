#include<cstring>
class Solution {
public:

    string encode(vector<string>& strs) {
        int sz = 0;
        uint32_t cnt = 0;
        for(string s: strs)
        {
            sz += s.size() + 4;
            cnt++;
        }
        printf("%d", sz);
        char *e = (char *)malloc(sz+4);
        int i = 0;
        memcpy(e+i,&cnt, 4);
        i+=4;

        for(string s: strs)
        {
            uint32_t s_size = s.size();
            memcpy(e+i,(char *)&s_size, 4);
            i+=4;
            printf("CS%d, ", *(uint32_t *)(e+i-4));
            memcpy(e+i,s.c_str(), s_size);
            i+= s_size;
        }

        printf("%10s", e);
        std::string r(e, sz + 4);
        return r;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        const char *e = s.c_str();

        uint32_t cnt;
        int i = 0;
        memcpy((char *)&cnt, e+i, 4);
        i+=4;
        printf("%d ",cnt);
        for(int j = 0; j < cnt;j++)
        {
            uint32_t ssize;
            memcpy((char *)&ssize, e+i, 4);
            i+=4;
            printf("%d ",ssize);
            char *t = (char *)malloc(ssize);
            memcpy(t, e+i, ssize);
            i+=ssize;
            string ts(t, ssize);
            free(t);
            strs.push_back(ts);
        }
        return strs;
    }
};
