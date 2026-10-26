class Solution {
public:
    bool checkDivisibility(int n) {
        int i=0, j=1;
        for(int x=n; x>0; x/=10){
            const int k=x%10;
            i+=k;
            j*=k;
        }
        return n%(i+j)==0;
    }
};