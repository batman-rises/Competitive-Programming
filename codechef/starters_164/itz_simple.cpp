#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> arr(n);

        // Read the chair heights
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Sort the chairs in ascending order
        sort(arr.begin(), arr.end());

        // Ved gets the tallest chair
        int ved = arr[n - 1] + k;

        // Varun gets the sum of all other chairs
        int varun = accumulate(arr.begin(), arr.end() - 1, 0) + p;

        // Compare the combined heights
        if (ved > varun)
        {
            cout << "Ved" << endl;
        }
        else if (ved < varun)
        {
            cout << "Varun" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}
