#include <bits/stdc++.h>
using namespace std;

int main()
{
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

        int seconds = 0;
        bool stable = false;

        while (!stable)
        {
            stable = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                    arr[i] = arr[i + 1];
                    stable = false;
                }
            }
            if (!stable)
            {
                seconds++;
            }
        }

        cout << seconds << endl;
    }
    return 0;
}
