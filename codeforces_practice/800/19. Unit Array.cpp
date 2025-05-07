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
        int k = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                k++;
            else
                l++;
        }
        int op = 0;
        while (l > k || (l % 2 != 0))
        {
            k++;
            l--;
            op++;
        }
        cout << op << endl;
    }
    return 0;
}
