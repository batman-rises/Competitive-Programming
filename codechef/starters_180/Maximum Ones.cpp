#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0;
        for (int i = n - 2; i >= 0 && k > 0; i--)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                s[i] = '1'; // Apply the operation: s[i] = max(s[i], s[i+1])
                k--;        // Decrement remaining operations
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c++;
            }
        }
        cout << c << endl;
    }
}
