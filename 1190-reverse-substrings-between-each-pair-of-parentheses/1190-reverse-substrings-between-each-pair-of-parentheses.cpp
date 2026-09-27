
class Solution {
public:
    string reverseParentheses(string s) {
        vector<string> st;
        string front = "";

        for (char ch : s) {

            if (ch == '(') {
                st.push_back(front);
                front = "";

            } else if (ch == ')') {
                reverse(front.begin(), front.end());

                string previous = st.back();
                st.pop_back();

                front = previous + front;

            } else {
                front += ch;
            }
        }

        return front;
    }
};