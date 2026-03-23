class Solution {
public:
    int minimumIndex(vector<int>& a, int itemSize) {
        int n=a.size();
        int l=0,h=n-1;
        
        int ans=-1;
        int minCap=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]>=itemSize && a[i]<minCap){
                minCap=a[i];
                ans=i;
            }
        }
        return ans;
    }
};©leetcode