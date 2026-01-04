class Solution
{
public:
    bool prime(int n)
    {
        if (n <= 1)
            return false;
        if (n == 2)
            return true;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    long long splitArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> temp1;
        vector<int> temp2;
        for (int i = 0; i < n; i++)
        {
            if (prime(i))
                temp1.push_back(nums[i]);
            else
                temp2.push_back(nums[i]);
        }
        long long s1 = accumulate(temp1.begin(), temp1.end(), 0LL);
        long long s2 = accumulate(temp2.begin(), temp2.end(), 0LL);
        return abs(s1 - s2);
    }
};