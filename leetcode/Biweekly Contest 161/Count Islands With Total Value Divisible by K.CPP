class Solution
{
public:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid, long long &sum)
    {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        sum += grid[row][col];
        q.push({row, col});
        int n = grid.size();
        int m = grid[0].size();

        int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

        while (!q.empty())
        {
            auto [r, c] = q.front();
            q.pop();
            for (auto &[dr, dc] : dir)
            {
                int nr = r + dr, nc = c + dc;
                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    !vis[nr][nc] && grid[nr][nc] != 0)
                {
                    vis[nr][nc] = 1;
                    sum += grid[nr][nc];
                    q.push({nr, nc});
                }
            }
        }
    }
    int countIslands(vector<vector<int>> &grid, int k)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                if (!vis[row][col] && grid[row][col] != 0)
                {

                    long long sum = 0;
                    bfs(row, col, vis, grid, sum);
                    if (sum % k == 0)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};