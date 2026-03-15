class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int m = n;
        int a;
        int s = 0, p = 1;
        while (n != 0)
        {
            a = n % 10;
            s += a;
            p *= a;
            n = n / 10;
        }
        if (m % (s + p) == 0)
            return true;
        else
            return false;
    }
};