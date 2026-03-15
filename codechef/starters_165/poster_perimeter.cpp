#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        int minDiff = INT_MAX;
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int peri = 2 * (i + j);
                int diff = abs(peri - k);
                minDiff = min(minDiff, diff);
            }
        }
        cout << minDiff << endl;
    }
    return 0;
}
