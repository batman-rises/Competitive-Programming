class Solution {
public:
   
    long long countSubarrays(vector<int>& a, int k, int m) {
        long long ans=0;
        int n=a.size();
        for(int i=0;i<n;i++){
                unordered_map<int,int> freq;
            for(int j=i;j<n;j++){
                freq[a[j]]++;
                if(freq.size()==k){         //TLE
                    bool ok=true;
                    for(auto &p:freq){
                        if(p.second < m){
                            ok=false;
                            break;
                        }
                    }
                    if(ok)ans++;
                }
            }
        }
        return ans;
    }
};©leetcode