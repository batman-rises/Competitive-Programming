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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> copy(arr, arr + n); // fix here
        sort(copy.begin(), copy.end());

        if (equal(arr, arr + n, copy.begin()) || k > 1) // compare arrays properly
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
