#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int x, y, z;
    cin >> x >> y >> z;
    int cal = y * z;
    if (cal > x)
        cout << "-1";
    else
        cout << (x - cal);
}
