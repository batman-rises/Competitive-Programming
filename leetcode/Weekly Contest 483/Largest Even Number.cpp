class Solution
{
public:
    string largestEven(string s)
    {
        string res = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] % 2 == 0)
            {
                res = s.substr(0, i + 1);
                break;
            }
        }
        return res;
    }
};