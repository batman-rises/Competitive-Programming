class Solution {
public:
    int minimumPrefixLength(vector<int>& a) {
        int n=a.size();
        if(n<=1)
            return 0;
        int i=n-1;
        while(i>0 && a[i]>a[i-1]){
            i--;
        }
        return i;
    }
};