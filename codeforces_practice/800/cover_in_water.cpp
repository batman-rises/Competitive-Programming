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
        string s;
        cin >> s;
        int cnt = 0, tot = 0;
        bool printed = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                cnt++;
                tot++;
                if (cnt == 3)
                {
                    cout << "2" << endl;
                    printed = true;
                    break;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        if (!printed)
            cout << tot << endl;
    }
    return 0;
}
