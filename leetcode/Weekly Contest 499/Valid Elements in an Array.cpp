class Solution {
public:
    vector<int> findValidElements(vector<int>& a) {
        int n=a.size();
        vector<int> leftMaxm(n);
        vector<int> rightMaxm(n);
        int maxi=-1e8;
        for(int i=0;i<n;i++){
            maxi=max(a[i],maxi);
            leftMaxm[i]=maxi;
        }
        maxi=-1e8;
        for(int i=n-1;i>=0;i--){
            maxi=max(a[i],maxi);
            rightMaxm[i]=maxi;
        }

        vector<int>res;
        for(int i=0;i<n;i++){
            //edge case
            if(i==0||i==n-1){
                res.push_back(a[i]);
                continue;
            }
            
            if((i>0 && a[i]>leftMaxm[i-1]) || (i<n-1 && a[i]>rightMaxm[i+1])){
                res.push_back(a[i]);
            }
        }
        return res;
    }
};