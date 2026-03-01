class Solution {
public:
    int helper(vector<vector<int>>& a,int row){
        int m=a[0].size();
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            if(a[row][i]<ans){
                ans=a[row][i];
            }
        }
        return ans;
    }
    int minimumOR(vector<vector<int>>& a) {       //wrong intuition
        int n=a.size();
        int m=a[0].size();
        int mini=0;
        for(int i=0;i<n;i++){
            int rowWiseMini=helper(a,i);
            mini=mini | rowWiseMini;
        }
        return mini;
    }
};©leetcode