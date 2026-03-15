#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int x;
    cin >> x;
    int cnt = 0;
    if (x == 0)
        cout << "0";
    if (x >= 7)
        cout << "3";
    else if (x >= 3)
        cout << "2";
    else
        cout << "1";

    return 0;
}
