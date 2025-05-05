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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 2)
            {
                cnt += (arr[i] - 1);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
