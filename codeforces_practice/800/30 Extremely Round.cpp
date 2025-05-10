#include <bits/stdc++.h>
using namespace std;

int solve(long long n)
{
    string s = to_string(n);
    int digits = s.length();
    int cnt = 9 * (digits - 1);
    int leadingDigit = s[0] - '0';
    cnt += leadingDigit;

    int base = leadingDigit * pow(10, digits - 1);
    if (n < base)
        cnt--;
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        cout << solve(n) << endl;
    }
    return 0;
}