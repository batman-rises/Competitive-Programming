class Solution {
public:
    int dominantIndices(vector<int>& a) {
        int c = 0;
        int n = a.size();
        if(n<=1)return 0;
        int sum= accumulate(a.begin(), a.end(), 0);
        for (int i = 0; i < n; i++) {
            sum-=a[i];
            int elms_to_right=n-1-i;
            if(a[i]*elms_to_right > sum)c++;
        }
        return c;
    }
};
