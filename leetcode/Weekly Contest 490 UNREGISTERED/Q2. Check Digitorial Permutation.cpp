class Solution {
public:
    int func(int n){
        int f=1;
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        return f;
    }
    bool isDigitorialPermutation(int n) {
        int m=n;
        int sum=0;
        while(n>0){
            int a=n%10;
            int fact=func(a);
            sum+=fact;
            n=n/10;
        }
        string s1=to_string(m);
        string s2=to_string(sum);
        if(s1.size() != s2.size()){
            return false;
        }
        int freq1[10]={0};
        int freq2[10]={0};
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'0']++;
             freq2[s2[i]-'0']++;
        }
        for(int i=0;i<10;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
};