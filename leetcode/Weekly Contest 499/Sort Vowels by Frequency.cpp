class Solution {
public:
    string sortVowels(string s) {
        string vowel="";
        string org=s;
        
        unordered_map<char,int>mp;
        unordered_map<char,int> firstIdx;
        
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                mp[ch]++;
                if(!firstIdx.count(ch)){
                    firstIdx[ch]=i;
                }
            }
        }

        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') && vowel.find(ch)==string::npos){
                vowel.push_back(ch);
            }
        }

        auto myComparator=[&](char a,char b){
            if(mp[a] != mp[b])
                return (mp[a]>mp[b]);
            return firstIdx[a]<firstIdx[b];
        };

        sort(vowel.begin(),vowel.end(),myComparator);

        string x="";
        for(char ch:vowel){
            for(int k=0;k<mp[ch];k++){
                x+=ch;
            }
        }

        
        int j=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                org[i]=x[j];
                j++;
            }
        }
        return org;
    }
};