bool check(vector<int> &nums)
{
    unordered_set<int> st;
    for (int num : nums)
    {
        if (st.count(num))
            return false;

        st.insert(num);
    }
    return true;
}
int minimumOperations(vector<int> &nums)
{
    int cnt = 0;
    while (!check(nums))
    {
        if (nums.size() < 3)
            nums.clear();
        else
            nums.erase(nums.begin(), nums.begin() + 3);

        cnt++;
    }
    return cnt;
}