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
        vector<int> returnDays(n);
        for (int i = 0; i < n; i++)
        {
            cin >> returnDays[i];
        }
        int total_penalty = 0;
        unordered_map<int, int> mpp; // will store maxm penalty for each day
        for (int i = 0; i < n; i++)
        {
            int day = returnDays[i];
            int penalty = i + 1;
            mpp[day] = max(mpp[day], penalty);
        }

        for (auto it : mpp)
        {
            total_penalty += it.second;
        }

        cout << total_penalty << endl;
    }
    return 0;
}
