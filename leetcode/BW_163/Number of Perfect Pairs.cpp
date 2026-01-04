class Solution
{
public:
    long long perfectPairs(vector<int> &nums)
    {
        int n = nums.size();
        long long count = 0;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int a = nums[i], b = nums[j];

                if (min(abs(a - b), abs(a + b)) <= min(abs(a), abs(b)) &&
                    max(abs(a - b), abs(a + b)) >= max(abs(a), abs(b)))
                {
                    count++;
                }
            }
        }
        return count;
    }
};
©leetcode

    // GOT TLE