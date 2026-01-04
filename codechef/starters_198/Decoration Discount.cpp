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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int minm = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int cost;
                    if (j == i + 1)
                    {

                        cost = a[i] + a[j] / 2;
                    }
                    else
                    {
                        // No discount applies
                        cost = a[i] + a[j];
                    }
                    minm = min(minm, cost);
                }
            }
        }
        cout << minm << endl;
    }
}
