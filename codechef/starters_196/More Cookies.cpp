#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T; // number of test cases

    while (T--)
    {
        int n, c;
        cin >> n >> c; // number of friends and Alice's initial cookies

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; // cookies each friend bought
        }

        int extraCookies = 0;

        while (true)
        {
            bool hasLess = false;
            bool hasEqual = false;

            for (int i = 0; i < n; i++)
            {
                if (a[i] < c)
                    hasLess = true;
                if (a[i] == c)
                    hasEqual = true;
            }

            if (hasLess && !hasEqual)
            {
                break; // Alice is happy
            }

            // Otherwise, buy one more cookie
            c++;
            extraCookies++;
        }

        cout << extraCookies << endl;
    }

    return 0;
}
