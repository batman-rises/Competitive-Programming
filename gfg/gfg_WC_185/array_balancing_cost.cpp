/**
 * You are given an array arr[] of integers of size n.

An array is balanced if:

Elements at odd indices (1-based) are odd integers.
Elements at even indices (1-based) are even integers.
Operations Allowed:
You can swap any two elements arr[i] and arr[j] at indices i and j (0-based).
The cost of the swap is arr[i] + arr[j].
Task:
Find the minimum cost required to make the array balanced.

If it's not possible to make the array balanced, return -1.
 */

int minCost(vector<int> &arr)
{
    int n = arr.size();

    vector<int> oddPositions, evenPositions;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 1)
        {
            if (arr[i] % 2 == 0)
            {
                evenPositions.push_back(i);
            }
        }
        else
        {
            if (arr[i] % 2 == 1)
            {
                oddPositions.push_back(i);
            }
        }
    }

    if (oddPositions.size() != evenPositions.size())
    {
        return -1;
    }

    int totalCost = 0;
    for (int i = 0; i < oddPositions.size(); i++)
    {
        totalCost += arr[oddPositions[i]] + arr[evenPositions[i]];
    }

    return totalCost;
}