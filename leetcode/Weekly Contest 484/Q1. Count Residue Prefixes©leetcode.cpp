class Solution
{
public:
    int residuePrefixes(string a)
    {
        int n = a.size();
        int ans = 0, cnt = 0;
        vector<int> hash(26, -1);
        for (int i = 0; i < n; i++)
        {
            if (hash[a[i] - 'a'] == -1)
            {
                hash[a[i] - 'a'] = 1;
                cnt++;
            }
            if (cnt == (i + 1) % 3)
            {
                ans++;
            }
        }
        return ans;
    }
};
©leetcode