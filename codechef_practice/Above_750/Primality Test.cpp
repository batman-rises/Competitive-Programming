#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool isPrime = true;
        if (n <= 1)
        {
            cout << "no" << endl;
            continue;
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
