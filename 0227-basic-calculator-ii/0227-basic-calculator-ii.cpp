class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        char oper = '+';
        int i = 0 ;
        while(i < s.size()){
            if(s[i] == ' '){
                 i++;
            }
            else if(s[i] == '/' || s[i] == '+' || s[i] == '*' || s[i] =='-'){
                oper = s[i];
                i++;
            }else {
                int n = 0;
                while(i < s.size() && isdigit(s[i]) ){
                    n = n*10 + (s[i] - '0');
                    i++;
                }
                if(oper == '+'){
                    st.push(n);
                }else if( oper == '-'){
                    st.push(n*-1);
                }else{
                    int x = st.top();
                    st.pop();
                    (oper == '*') ? st.push(n*x) : st.push(x/n);
                }
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans +=st.top();
            st.pop();
        }

return ans ;
        
    }
};