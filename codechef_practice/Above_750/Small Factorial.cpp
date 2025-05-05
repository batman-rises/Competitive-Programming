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
        long long f = 1;
        if (n == 0)
        {
            cout << "1" << endl;
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            f *= i;
        }
        cout << f << endl;
    }
}
