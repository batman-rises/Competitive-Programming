class Solution {
public:
    long long calculateGCD(long long a,long long b){
        if(a==b)return a;
        while(b!=0){
            long long temp=a%b;
            a=b;
            b=temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& a) {
        int n=a.size();
        vector<long long> gcd(n);
        int maxi=a[0];
        for(int i=0;i<a.size();i++){
            maxi=max(maxi,a[i]);
            
                gcd[i]=calculateGCD(a[i],maxi);
        }
        sort(gcd.begin(),gcd.end());
        long long l=0;
        long long r=gcd.size()-1;
        long long s=0;
        while(l<r){
            s+=calculateGCD(gcd[l],gcd[r]);
            l++;
            r--;
        }
        return s;
    }
};