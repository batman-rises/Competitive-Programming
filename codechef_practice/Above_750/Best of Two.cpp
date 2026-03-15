#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        vector<int> temp1;
        temp1.push_back(a1);
        temp1.push_back(a2);
        temp1.push_back(a3);
        vector<int> temp2;
        temp2.push_back(b1);
        temp2.push_back(b2);
        temp2.push_back(b3);

        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());

        int sumA = temp1[2] + temp1[1];
        int sumB = temp2[2] + temp2[1];
        if (sumA > sumB)
            cout << "Alice" << endl;
        else if (sumA < sumB)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
}
