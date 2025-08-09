class Solution
{
public:
    bool isTrionic(vector<int> &a)
    {
        int n = a.size();
        int i = 0;
        if (n < 3)
            return false;
        // Strictly increasing
        while (i + 1 < n && a[i] < a[i + 1])
            i++;
        if (i == 0 || i == n - 1)
            return false; // p must be > 0

        // Strictly decreasing
        int peak = i;
        while (i + 1 < n && a[i] > a[i + 1])
            i++;
        if (i == peak || i == n - 1)
            return false; // q must be > p and < n-1

        // Strictly increasing
        int valley = i;
        while (i + 1 < n && a[i] < a[i + 1])
            i++;

        return i == n - 1;
    }
};