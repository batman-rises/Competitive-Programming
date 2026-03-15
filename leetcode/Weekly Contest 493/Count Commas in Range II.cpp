class Solution {
public:
    long long countCommas(long long n) {
        long long start=1000;
        long long cnt=1;
        long long total=0;
        while(start<=n){
            //long long numbers=n-start+1;
            total+=((n-start+1));
            start*=1000;
            cnt++;
        }
        return total;
    }
};