#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long maxm = arr[n - 1];
        long long minm = arr[0];

        if (maxm == minm)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << maxm << " ";

            for (int i = 0; i < n - 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}