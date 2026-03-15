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
            cin >> arr[i];

        int sum = 0;
        bool failed = false;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            double avg = sum * 1.0 / (i + 1);
            if (avg < 40.0)
            {
                failed = true;
                break;
            }
        }

        cout << (failed ? "No" : "Yes") << "\n";
    }

    return 0;
}
