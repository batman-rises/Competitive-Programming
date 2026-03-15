class Solution
{
public:
    bool isValid(string &top, string &left, string &right, string &bottom)
    {
        return (top[0] == left[0] &&
                top[3] == right[0] &&
                bottom[0] == left[3] &&
                bottom[3] == right[3]);
    }
    vector<vector<string>> wordSquares(vector<string> &words)
    {
        vector<vector<string>> res;
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                for (int k = 0; k < n; k++)
                {
                    if (k == i || k == j)
                        continue;
                    for (int l = 0; l < n; l++)
                    {
                        if (l == i || l == j || l == k)
                            continue;
                        string top = words[i];
                        string left = words[j];
                        string right = words[k];
                        string bottom = words[l];
                        if (isValid(top, left, right, bottom))
                            res.push_back({top, left, right, bottom});
                    }
                }
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};