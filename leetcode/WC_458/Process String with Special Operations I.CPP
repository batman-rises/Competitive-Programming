class Solution
{
public:
    string processStr(string s)
    {
        string res = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (islower(s[i]))
                res += s[i];
            if (s[i] == '*')
            {
                if (!res.empty())
                {
                    res.pop_back();
                }
            }
            if (s[i] == '#')
            {
                if (!res.empty())
                {
                    res += res;
                }
            }
            if (s[i] == '%')
            {
                if (!res.empty())
                {
                    reverse(res.begin(), res.end());
                }
            }
        }
        return res;
    }
};
