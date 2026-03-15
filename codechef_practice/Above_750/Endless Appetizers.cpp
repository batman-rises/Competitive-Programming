#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int extra = r / 30;
        int tot = x + extra;
        if (tot % y == 0)
            cout << (tot / y) << endl;
        else
            cout << (tot / y) + 1 << endl;
    }
}
