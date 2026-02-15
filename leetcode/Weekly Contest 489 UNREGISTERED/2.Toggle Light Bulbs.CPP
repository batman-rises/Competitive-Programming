class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        sort(bulbs.begin(),bulbs.end());
        map<int,int>mp;
        for(int n:bulbs){
            mp[n]++;
        }
        vector<int>res;
        for(auto const&[x,cnt]:mp){
            if(cnt%2==1){
                res.push_back(x);
            }
        }
        return res;
    }
};