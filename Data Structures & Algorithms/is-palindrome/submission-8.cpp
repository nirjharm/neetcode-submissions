class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.size();

        string s2; 
        for(int i = 0; i < l; i++)
        {
            if(isalnum(s[i]))
            {  
                s2+=tolower(s[i]); 
            }
        }

        l = s2.size();
        for(int i = 0; i < l/2; i++)
        {
            if(s2[i] != s2[l-1-i])
                return false;
        }
        return true;
    }
};
