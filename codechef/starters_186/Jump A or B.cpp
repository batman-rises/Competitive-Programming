#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int diff = a - b;
        int val = m - n * b;

        bool possible;
        if (diff == 0)
        {
            // All jumps same length
            possible = (a * n == m);
        }
        else
        {
            possible = (val % diff == 0);
            int x = val / diff;
            if (!possible || x < 0 || x > n)
                possible = false;
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
}

hellor am good
