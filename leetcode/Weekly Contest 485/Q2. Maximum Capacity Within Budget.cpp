//ATTEMPTED

class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        int maxi=0;
        int n=costs.size();
        for (int i = 0; i < n; i++) {
            if (costs[i] < budget) {
                maxi = max(maxi, capacity[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (costs[i] + costs[j] < budget) {
                    maxi = max(maxi, capacity[i] + capacity[j]);
                }
            }
        }
        return maxi;
    }
};