class Solution {
public:
    string mergeCharacters(string s, int k) {
        string res;
        unordered_map<char,int> lastIndex;
        for(char c:s){
            if(lastIndex.count(c)){
                int prevIndex=lastIndex[c];
                int currIndex=res.size();

                if(currIndex-prevIndex <= k){
                    continue;
                }
            }
            res.push_back(c);
            lastIndex[c]=res.size()-1;
        }
        return res;
    }
};