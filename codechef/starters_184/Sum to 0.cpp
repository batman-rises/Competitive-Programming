#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << -1 << endl; // Can't make a non-zero number sum to 0
            continue;
        }

        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << "1 -1 ";
            }
        }
        else
        {
            for (int i = 0; i < (n - 3) / 2; i++)
            {
                cout << "1 -1 ";
            }
            cout << "1 1 -2";
        }
        cout << endl;
    }
    return 0;
}
