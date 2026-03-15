class Solution {
public:
    int firstUniqueFreq(vector<int>& a) {
        if(a.size()==1)return a[0];
       
        unordered_map<int,int>mp;
        for(int n:a){
            mp[n]++;
        }
        unordered_map<int,int>freqs;
        for(auto [x,cnt]:mp){
            freqs[cnt]++;
        }
        for(int n:a){
            int f=mp[n];
            if(freqs[f]==1)return n;
        }
        return -1;
    }
};