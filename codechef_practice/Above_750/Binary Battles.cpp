#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int tot = 0;

        while (n != 1)
        {
            n = n / 2;
            if (n != 1)
                tot += (a + b);
            else
                tot += a;
        }
        cout << tot << endl;
    }
}
