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
        cin >> n >> m >> k;
        int total = n * m;
        int maxAlice = 0;

        if (k == 0)
        {
            cout << total << endl;
            continue;
        }
        if (k > total)
        {
            cout << 0 << endl;
            continue;
        }

        // Try vertical cuts (cut along rows)
        for (int i = 1; i < n; ++i)
        {
            int area1 = i * m;
            int area2 = (n - i) * m;
            if (area1 >= k)
                maxAlice = max(maxAlice, area2);
            if (area2 >= k)
                maxAlice = max(maxAlice, area1);
        }

        // Try horizontal cuts (cut along columns)
        for (int j = 1; j < m; ++j)
        {
            int area1 = n * j;
            int area2 = n * (m - j);
            if (area1 >= k)
                maxAlice = max(maxAlice, area2);
            if (area2 >= k)
                maxAlice = max(maxAlice, area1);
        }

        cout << maxAlice << endl;
    }
    return 0;
}
