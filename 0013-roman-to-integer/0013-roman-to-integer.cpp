class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> roman_num = {
            {'I', 1},
            {'V', 5},
            {'X', 10}, 
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for (int i = 0; i < s.size() - 1; i++) {
            if (roman_num[s[i]] < roman_num[s[i + 1]]) {
                res -= roman_num[s[i]];
            } else {
                res += roman_num[s[i]];
            }
        }

        return res + roman_num[s[s.size() - 1]];        
    }
};