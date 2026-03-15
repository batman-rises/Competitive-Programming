#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
        cout << n << endl;
        return 0;
    }
    else if (n % 3 == 1)
    {
        cout << n - 1 << endl;
        return 0;
    }
    else
    {
        cout << n + 1 << endl;
        return 0;
    }
}
