class Solution
{
public:
    int centeredSubarrays(vector<int> &a)
    {
        int n = a.size();

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int s = 0;
            unordered_map<int, int> mp;
            for (int j = i; j < n; j++)
            {
                mp[a[j]] = i;
                s += a[j];
                if (mp.find(s) != mp.end())
                    ans++;
            }
        }
        return ans;
    }
};
©leetcode