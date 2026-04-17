class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for (char c: str)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                s.push(c);
            }
            else
            {
                if(s.empty())
                    return false;
                char out = s.top();
                s.pop();
                if  (
                        (c == ')' && out == '(') || 
                        (c == '}' && out == '{') ||
                        (c == ']' && out == '[') 
                    )
                    continue;
                else
                    return false;
            }
        }
        if(s.empty())
            return true;
        return false;
    }
};
