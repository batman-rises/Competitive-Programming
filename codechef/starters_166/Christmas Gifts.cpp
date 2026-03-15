#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int h, l, b;
        cin >> h >> l >> b;
        int area = 2 * ((l * b) + (b * h) + (l * h));
        int maxBoxes = 1000 / area;
        cout << maxBoxes << endl;
    }
    return 0;
}
