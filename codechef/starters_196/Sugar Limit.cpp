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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int maxProfit = 0;
        for (int i = 0; i < n; i++)
        {
            int l = b[i];
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (b[j] <= l && a[j] > 0)
                {
                    sum += a[j];
                }
            }
            sum -= l;
            maxProfit = max(maxProfit, sum);
        }
        cout << maxProfit << endl;
    }
    return 0;
}
