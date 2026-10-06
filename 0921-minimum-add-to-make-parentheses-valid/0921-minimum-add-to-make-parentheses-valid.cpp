class Solution {
public:
    int minAddToMakeValid(string s) {
        int start = 0, add = 0;
        for (char c : s) {
            if (c == '(') {
                start++;
            } else {
                if (start > 0) {
                    start--;
                } else {
                    add++;
                }
            }
        }
        return add + start;
    }
};