#include <iostream>
#include <algorithm> // for sort (if you use it)
using namespace std;

bool going(int arr[], int n, int x, int &gas, int maxgas)
{
    // int initial = gas;
    int j = 0;
    for (int i = 0; i <= x; i++)
    {
        if (gas < 0)
        {
            return false;
        }
        if (j < n && arr[j] == i)
        { // its a gas station
            gas = maxgas;
            j++;
        }
        if (i < x) // Don't consume gas on the last position
            gas--; // Consume 1 unit of gas per step
    }
    return true;
}

bool returning(int arr[], int n, int x, int &gas, int maxgas)
{
    // int initial = gas;
    int j = n - 1;
    for (int i = x; i >= 0; i--)
    {
        if (gas < 0)
        {
            return false;
        }
        if (j >= 0 && arr[j] == i)
        { // its a gas station
            gas = maxgas;
            j--;
        }
        if (i > 0) // Don't consume gas on the last position (i=0)
            gas--; // Consume 1 unit of gas per step
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        // logic
        int result = -1;
        for (int i = 1; i <= x; i++)
        {
            int gas = i;
            if (going(arr, n, x, gas, i) && returning(arr, n, x, gas, i))
            {
                result = i;
                break;
            }
        }
        cout << result << endl;
    }
} // brute force failed

// optimal

#include <iostream>
#include <algorithm> // For std::max
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max_gap = arr[0]; // 0 to a_1
        for (int i = 1; i < n; i++)
        {
            max_gap = max(max_gap, arr[i] - arr[i - 1]); // Between stations
        }
        max_gap = max(max_gap, 2 * (x - arr[n - 1])); // Round trip a_n to x

        cout << max_gap << endl;
    }
    return 0;
}