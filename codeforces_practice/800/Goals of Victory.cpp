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
        int arr[n];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        int ans = 0, sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i];
        }

        cout << -sum << endl;
    }
    return 0;
}
