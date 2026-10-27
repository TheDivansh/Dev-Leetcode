class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> str(m - 1, "." + string(n - 1, '#'));
        
        str.push_back(string(n, '.'));
        
        return str;
    }
};