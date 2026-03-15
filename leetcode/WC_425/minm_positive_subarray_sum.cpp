class Solution
{
public:
    int minimumSumSubarray(vector<int> &nums, int l, int r)
    {
        int n = nums.size();
        int minPositiveSum = INT_MAX; // Track the minimum positive sum

        for (int i = 0; i < n; i++)
        { // Start of the subarray
            int windowSum = 0;
            for (int j = i; j < n && (j - i + 1) <= r; j++)
            { // Expand the subarray
                windowSum += nums[j];
                int size = j - i + 1;

                // Check if size is within range [l, r] and sum is positive
                if (size >= l && windowSum > 0)
                {
                    minPositiveSum = min(minPositiveSum, windowSum);
                }
            }
        }

        // Return the result or -1 if no valid subarray is found
        return (minPositiveSum == INT_MAX) ? -1 : minPositiveSum;
    }
};