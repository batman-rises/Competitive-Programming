class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        int last=-1,cnt=0;
        for(int i=0;i<nums.size();i++){
            
            int freq=mp[nums[i]];
            if(freq>0 && freq!=last){
                res.push_back(nums[i]);
                cnt++;
                if(cnt==2)return res;
                last=freq;
                
            }
        }
        return {-1,-1};
    }
};