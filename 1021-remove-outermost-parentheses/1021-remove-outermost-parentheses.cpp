class Solution {
public:
        //DQ
    string removeOuterParentheses(string s) {
        string answer;
        int count = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (count > 0)
                    answer += ch;
                count++;
            } else {
                count--;
                if (count > 0)
                    answer += ch;
            }
        }

        return answer;
    }
};