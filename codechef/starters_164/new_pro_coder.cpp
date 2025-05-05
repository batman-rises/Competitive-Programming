#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    // Check if M is at least half of N
    if (M >= (N + 1) / 2)
    { // Adding 1 to N ensures proper ceiling for odd numbers
        cout << "NEWBIE" << endl;
    }
    else
    {
        cout << "PRO" << endl;
    }

    return 0;
}
