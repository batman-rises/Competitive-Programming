#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long tot = 0;
        for (int i = 0; i < n; i++)
        {
            tot ^= a[i];
        }
        if (n % 2 != 0)
        {
            cout << tot << endl;
        }
        else
        {
            if (tot == 0)
                cout << tot << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}
