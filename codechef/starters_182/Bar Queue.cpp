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
        int cnt = 0, b = 0, g = 0;
        if (s[0] == 'B' && s[1] == 'G')
        {
            cout << "1" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                b++;
            else
                g++;
            cnt++;
            if (b > 2 * g)
            {
                // entrance closes before this person can enter
                break;
            }
        }
        cout << cnt << endl;
    }
}
