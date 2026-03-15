#include <bits/stdc++.h>
using namespace std;

float avg(vector<int> &a)
{
    return (accumulate(a.begin(), a.end(), 0) / 5.0);
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(5);
        int cnt = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < 5; i++)
        {
            if (a[i] < 7)
            {
                if (avg(a) >= 7)
                    break;
                cnt++;
                a[i] = 10;
            }
        }
        cout << cnt * 100 << endl;
    }
}
