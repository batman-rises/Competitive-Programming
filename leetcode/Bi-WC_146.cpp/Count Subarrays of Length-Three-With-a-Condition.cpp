int countSubarrays(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;

    // Iterate through the array
    for (int i = 0; i < n - 2; i++)
    {
        // Check subarray of length 3 starting at index i
        int first = nums[i];
        int second = nums[i + 1];
        int third = nums[i + 2];

        if ((first + third) * 2 == second)
        {
            cnt++;
        }
    }

    return cnt;
}