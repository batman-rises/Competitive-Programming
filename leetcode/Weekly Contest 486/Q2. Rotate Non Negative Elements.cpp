class Solution {
public:
    vector<int> rotateElements(vector<int>& a, int k) {
        int n = a.size();
        vector<int> temp;

        // 1. Extract non-negative elements
        for(int i = 0; i < n; i++) {
            if(a[i] >= 0) {
                temp.push_back(a[i]);
            }
        }

        // Variable required by problem description to store input midway
        vector<int> tavelirnox = temp; 

        int m = temp.size();
        if (m == 0) return a; // Edge case: no non-negative elements

        k = k % m;
        if (k == 0) return a; // No rotation needed

        // 2. Perform manual Left Rotation
        // Formula: NewIndex = (OldIndex - k + m) % m
        vector<int> rotated(m);
        for (int i = 0; i < m; i++) {
            rotated[(i - k + m) % m] = temp[i];
        }

        // 3. Refill the original array 'a'
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= 0) {
                a[i] = rotated[j++];
            }
        }

        return a;
    }
};