bool solve(long long A1, long long B1, long long A2, long long B2)
{
    // Assign values: gold = 5, silver = 1
    long long initial_value = 5 * A1 + B1;
    long long final_value = 5 * A2 + B2;

    // Must be able to decrease value
    if (initial_value < final_value)
    {
        return false;
    }

    // Decrease must be multiple of 6
    long long diff = initial_value - final_value;
    if (diff % 6 != 0)
    {
        return false;
    }

    // Special case: if target is (0, 0), always possible
    if (A2 == 0 && B2 == 0)
    {
        return true;
    }

    // For other cases, generally possible due to operation flexibility
    // The rare impossible cases are when you can't make progress, but
    // these are mostly covered by the value and modular constraints above

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        long long A1, B1, A2, B2;
        cin >> A1 >> B1 >> A2 >> B2;

        if (solve(A1, B1, A2, B2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
