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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cout << (n + 1) - arr[i] << endl;
        }
        cout << endl;
    }
    return 0;
}
