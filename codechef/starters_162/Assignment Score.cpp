#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        int n; // Number of completed assignments
        cin >> n;

        vector<int> arr(n); // Dynamically allocate array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int total = 0; // Total marks in first N assignments
        for (int i = 0; i < n; i++)
        {
            total += arr[i];
        }

        int max_marks = 100 * (n + 1);  // Total marks possible
        int pass_marks = max_marks / 2; // Minimum marks to pass

        if (total + 100 < pass_marks)
        {
            // Even with a full 100 on the last assignment, passing is impossible
            cout << -1 << endl;
        }
        else
        {
            // Minimum marks needed in the last assignment
            cout << max(0, pass_marks - total) << endl;
        }
    }
    return 0;
}
