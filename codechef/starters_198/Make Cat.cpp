#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    if (mp['c'] && mp['a'] && mp['t'])
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}