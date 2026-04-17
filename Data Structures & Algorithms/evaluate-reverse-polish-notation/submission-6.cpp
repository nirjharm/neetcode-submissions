class Solution {

    bool isnumer(string s)
        {
            if (s.size() == 1)
            {
                if (isdigit(s[0]))
                    return true;
            }
            else
            {
                if(isdigit(s[1]))
                    return true;
            }
            return false;
        }
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        for(string c: t)
        {
            if(isnumer(c))
                s.push((atoi(c.c_str())));
            else
            {
                int a, b;
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                
                if (c[0] == '+')
                    s.push(a+b);
                if (c[0] == '-')
                    s.push(a-b);
                if (c[0] == '*')
                    s.push(a*b);
                if (c[0] == '/')
                    s.push(a/b);
            }
        }
        return s.top();
    }
};
