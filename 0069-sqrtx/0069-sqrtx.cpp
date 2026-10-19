class Solution {
public:
        //0 Ms runtime
    int mySqrt(int x) {
        if(x <= 1) return x;
        int low = 1;
        int high = x / 2;
        while(low <= high){
            int middle = low + (high - low) / 2;
            if(middle > x / middle)high = middle - 1;
            else low = middle + 1;
        } 
        return low - 1;
    }
};