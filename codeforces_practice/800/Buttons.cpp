#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int anna_moves = 0;
        int kat_moves = 0;
        if (c % 2 != 0)
        {
            anna_moves = a + (c / 2) + 1;
            kat_moves = b + (c / 2);
        }
        else
        {
            anna_moves = a + (c / 2);
            kat_moves = b + (c / 2);
        }
        if (anna_moves > kat_moves)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;
}
