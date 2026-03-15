#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        if (mp.size() >= 3)
        {
            cout << "No" << endl;
        }
        else
        {
            long long n1 = mp.begin()->second;
            long long n2 = mp.rbegin()->second;
            if (n1 == n2)
            {
                cout << "Yes" << endl;
            }
            else if (n % 2 == 1 && abs(n1 - n2) == 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
