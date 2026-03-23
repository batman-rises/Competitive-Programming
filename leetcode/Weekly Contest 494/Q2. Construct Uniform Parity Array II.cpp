class Solution {
public:
    bool uniformArray(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        int target=a[0]%2;
        bool seenOdd=(a[0]%2 == 1);
        for(int i=1;i<n;i++){
           if(a[i]%2 != target){
               if(!seenOdd)
                   return false;
           }
           
            if(a[i] %2 == 1)
                    seenOdd=true;
            
           }
       
        return true;
    }
};