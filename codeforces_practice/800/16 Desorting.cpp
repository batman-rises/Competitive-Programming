#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
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

        bool is_sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                is_sorted = false;
                break;
            }
        }

        if (!is_sorted)
        {
            cout << "0" << endl;
            continue;
        }

        long long cnt = INT_MAX; // Initialize to maximum possible value
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            { // adjacent elements in increasing order
                long long diff = arr[i + 1] - arr[i];
                long long required_ops = (diff / 2) + 1;
                cnt = min(cnt, required_ops);
            }
        }

        cout << cnt << endl;
    }
    return 0;
}