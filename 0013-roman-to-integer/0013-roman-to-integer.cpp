class Solution {
public:
    int romanToInt(string s) {

        int answer = 0;

        for(int i = 0; i < s.length(); i++) {

            int crr;

            if(s[i] == 'I') crr = 1;
            else if(s[i] == 'V') crr = 5;
            else if(s[i] == 'X') crr = 10;
            else if(s[i] == 'L') crr = 50;
            else if(s[i] == 'C') crr = 100;
            else if(s[i] == 'D') crr = 500;
            else crr = 1000;

            if(i + 1 < s.length()) {

                int up;

                if(s[i + 1] == 'I') up = 1;
                else if(s[i + 1] == 'V') up = 5;
                else if(s[i + 1] == 'X') up = 10;
                else if(s[i + 1] == 'L') up = 50;
                else if(s[i + 1] == 'C') up = 100;
                else if(s[i + 1] == 'D') up = 500;
                else up = 1000;

                if(crr < up)
                    answer -= crr;
                else
                    answer += crr;

            } else {
                answer += crr;
            }
        }

        return answer;
    }
};