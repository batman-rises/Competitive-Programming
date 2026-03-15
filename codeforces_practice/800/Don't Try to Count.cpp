#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check(string x, string s)
{
    if (x.size() < s.size())
        return false;
    for (int i = 0; i < x.size() - s.size() + 1; i++)
    {
        if (x.substr(i, s.size()) == s)
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int cnt = 0;

        string original = x;

        while (cnt <= 5)
        {
            if (check(x, s))
            {
                cout << cnt << endl;
                break;
            }
            x += x;
            cnt++;
        }

        if (cnt > 5)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
