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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int odd_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
                odd_cnt++;
        }
        if (odd_cnt == 0)
        {
            cout << "No\n";
        }
        else
        {
            int remaining_odd = odd_cnt - 1;
            int available_even = (n - odd_cnt) + (remaining_odd / 2);
            if (available_even >= n - 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
