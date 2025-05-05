#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 3)
        {
            cout << "-1" << endl;
            continue;
        }
        int p = 0;
        for (int i = n; i >= 1; i -= 3)
        {
            int mx = max(i, max(i - 1, i - 2));
            if ((2 * mx) < (i + i - 1 + i - 2))
            {
                p = i + i - 1 + i - 2;
                break;
            }
        }
        cout << p << endl;
    }
}
