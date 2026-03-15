class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        for(int n:nums){
            if(mp[n]==1 && n%2==0){
                return n;
            }
        }
        return -1;
    }
};