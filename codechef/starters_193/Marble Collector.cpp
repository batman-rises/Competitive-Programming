#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<int> st;
        for (int i = 0; i < n; i++)
            st.insert(a[i]);

        cout << m - st.size() << "\n";
    }
}
