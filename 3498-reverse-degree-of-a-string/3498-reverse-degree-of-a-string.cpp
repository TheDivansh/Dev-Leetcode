class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            int revVal = 26 - (ch - 'a');
            int pos = i + 1;

            sum += revVal * pos;
        }
        return sum;
    }
};