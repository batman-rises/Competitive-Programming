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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // my approach is the worst possible approach

        // int flag = 0;
        // // strictly increasing
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (arr[i] < arr[i + 1])
        //     {
        //         flag = 1;
        //     }
        //     else
        //     {
        //         flag = 0;
        //         break;
        //     }
        // }
        // if (flag)
        // {
        //     cout << "YES" << endl;
        //     break;
        // }
        // // strictly decreasing
        // flag = 0;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (arr[i] > arr[i + 1])
        //     {
        //         flag = 1;
        //     }
        //     else
        //     {
        //         flag = 0;
        //         break;
        //     }
        // }
        // if (flag)
        // {
        //     cout << "NO" << endl;
        //     break;
        // }

        if (arr[0] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
