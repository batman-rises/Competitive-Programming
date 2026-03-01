class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    string trimTrailingVowels(string s) {
        int n=s.size();int i;
        for(i=n-1;i>=0;i--){
            if(isVowel(s[i])==false){
                break;
            }
        }
        return s.substr(0,i+1);
    }
};©leetcode