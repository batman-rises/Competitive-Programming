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
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0, k = 0;
        for (char ch : s)
        {
            if (ch == '0')
                cnt0++;
            if (ch == '1')
                cnt1++;
            if (cnt0 == cnt1)
                k++;
        }
        cout << (1LL << k) << endl;
    }
}
