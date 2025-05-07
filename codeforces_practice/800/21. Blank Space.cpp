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
        int maxm = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cnt++;
                maxm = max(maxm, cnt);
            }
            else
            {

                cnt = 0;
            }
        }
        cout << maxm << endl;
    }
    return 0;
}
