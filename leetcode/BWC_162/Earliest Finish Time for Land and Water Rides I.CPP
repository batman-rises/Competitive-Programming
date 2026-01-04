class Solution
{
public:
    int earliestFinishTime(vector<int> &landStartTime, vector<int> &landDuration, vector<int> &waterStartTime, vector<int> &waterDuration)
    {
        int minTime = INT_MAX;
        int n = landStartTime.size(), m = waterStartTime.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // land first
                int landStart = landStartTime[i];
                int landEnd = landStart + landDuration[i];
                int waterStartAfterLand = max(landEnd, waterStartTime[j]);
                int waterEndAfterLand = waterStartAfterLand + waterDuration[j];
                // water first
                int waterStart = waterStartTime[j];
                int waterEnd = waterStart + waterDuration[j];
                int landStartAfterWater = max(waterEnd, landStartTime[i]);
                int landEndAfterWater = landStartAfterWater + landDuration[i];
                // take minimum
                int mini = min(landEndAfterWater, waterEndAfterLand);
                minTime = min(minTime, mini);
            }
        }
        return minTime;
    }
};