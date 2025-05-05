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
        { // cost of each item
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int cost = 0;
        for (int i = 0; i < n; i++)
        {
            int discounted_price = max(0, arr[i] - i);
            cost += discounted_price;
        }

        cout << cost << endl;
    }
    return 0;
}
