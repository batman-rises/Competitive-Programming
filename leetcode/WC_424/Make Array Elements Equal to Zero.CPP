class Solution
{
public:
    bool canMakeZero(vector<int> nums, int curr, int direction)
    {
        int n = nums.size();

        while (curr >= 0 && curr < n)
        {
            if (nums[curr] == 0)
            {
                curr += direction;
            }

            else if (nums[curr] > 0)
            {
                nums[curr]--;
                direction = -direction;
                curr += direction;
            }
        }
        for (int num : nums)
        {
            if (num != 0)
                return false;
        }
        return true;
    }
    int countValidSelections(vector<int> &nums)
    {
        int n = nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                if (canMakeZero(nums, i, 1))
                    cnt++;
                if (canMakeZero(nums, i, -1))
                    cnt++;
            }
        }
        return cnt;
    }
};