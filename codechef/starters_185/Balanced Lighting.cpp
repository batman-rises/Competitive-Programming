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
        {
            cin >> arr[i];
        }
        if (n % 2 != 0)
        {
            cout << "No\n";
        }
        else
        {
            int red = 0, blue = 0, zero = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 1)
                    red++;
                else if (arr[i] == 2)
                    blue++;
                else
                    zero++;
            }
            while (zero != 0)
            {
                if (red > blue)
                    blue++;
                else
                    red++;

                zero--;
            }
            if (red == blue)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
