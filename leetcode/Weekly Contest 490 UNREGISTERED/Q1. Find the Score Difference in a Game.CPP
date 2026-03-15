class Solution {
public:
    int scoreDifference(vector<int>& a) {
        int role=true;
        int s1=0,s2=0;
        for(int i=0;i<a.size();i++){
            if((i+1)%6==0){//every 6th game it should swap
                role=!role;
            }
            
            if(a[i]%2==1){
                role=!role;
            }
            else{
                role=role;
            }
            if(role){
                s1+=a[i];
            }else{
                s2+=a[i];
            }
        }
        return s1-s2;
        
    }
};