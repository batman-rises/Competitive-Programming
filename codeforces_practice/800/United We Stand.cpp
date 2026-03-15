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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b, c;
        a.push_back(b[0]);
        int mx = *max_element(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] != mx)
            {
                b.push_back(b[i]);
            }
            else
            {
                c.push_back(b[i]);
            }
        }
        if (b.size() == 0)
        {
            cout << "-1" << "\n";
        }
        else
        {

            cout << b.size() << " " << c.size() << "\n";
            for (int i = 0; i < b.size(); i++)
                cout << b[i] << endl;
        }
        for (int i = 0; i < c.size(); i++)
            cout << c[i] << endl;
    }

    return 0;
}
