class Solution
{
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>> &a, int x, int y, int k)
    {
        // int s=a[x][y];
        for (int i = 0; i < k / 2; i++)
        {
            for (int j = 0; j < k; j++)
            {
                swap(a[i + x][j + y], a[x + k - 1 - i][j + y]);
            }
        }
        return a;
    }
};