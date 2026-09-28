class Solution {
public:
    int maxDepth(string s) {
        int output = 0, depth = 0;
        for (char ch : s) {
            depth += (ch == '(') - (ch == ')');
            output = max(output, depth);
        }
        return output;
    }
};