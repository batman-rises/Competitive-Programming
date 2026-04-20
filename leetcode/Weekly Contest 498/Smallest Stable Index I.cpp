class Solution {
public:
    int firstStableIndex(vector<int>& a, int k) {
        int n=a.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int maxi=*max_element(a.begin(),a.begin()+i);
            int mini=*min_element(a.begin()+i,a.end());
            if(maxi-mini <= k){
                ans=i;
                break;
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};