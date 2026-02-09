class Solution {
public:
   typedef long long ll;

    vector<ll> mergeAdjacent(vector<int>& nums) {
        vector<ll>res;
        for(int n:nums){
            ll cur=n;
            while(!res.empty() && res.back()==cur){
                cur+=res.back();
                res.pop_back();
            }
            res.push_back(cur);
        }
        
        return res;
    }
};