#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_val = *min_element(a.begin(), a.end());
        int max_val = *max_element(a.begin(), a.end());

        ll ans = max(0LL, (ll)max_val - min_val - 1);
        cout << ans << '\n';
    }

    return 0;
}