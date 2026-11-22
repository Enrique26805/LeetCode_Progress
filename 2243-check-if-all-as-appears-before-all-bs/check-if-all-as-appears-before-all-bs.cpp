class Solution {
public:
    bool checkString(string s) {
        int a = INT_MIN;
        int b = INT_MAX;

        for(int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                a = i;
            }
            if(s[i] == 'b' && i < b)
            {
                b = i;
            }
        }
        if(b < a)
        {
            return false;
        }
        return true;
    }
};