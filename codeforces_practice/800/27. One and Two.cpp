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

        // Count total number of 2s
        long long total_twos = 0;
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] == 2)
                total_twos++;
        }

        // Find position where left count = right count
        long long left_twos = 0;
        long long ans = -1;

        for (long long i = 0; i < n; i++)
        {
            if (arr[i] == 2)
                left_twos++;

            long long right_twos = total_twos - left_twos;

            if (left_twos == right_twos)
            {
                ans = i + 1; // +1 because problem likely uses 1-indexed positions
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}