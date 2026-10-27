class Solution {
public:
        // 0 ms approach DQ
    vector<string> createGrid(int n, int m) {
        vector<string> str(n, string(m, '#'));
        for (int i = 0; i < m; i++)
            str[0][i] = '.';
        for (int i = 0; i < n; i++)
            str[i][m - 1] = '.';
        return str;
    }
};