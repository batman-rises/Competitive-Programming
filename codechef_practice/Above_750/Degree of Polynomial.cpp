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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Start from the end and find first non-zero coefficient
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] != 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
