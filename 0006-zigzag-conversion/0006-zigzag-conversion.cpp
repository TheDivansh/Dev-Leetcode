class Solution {
public:
                //
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows) 
        return s;

        vector<string> matrix(numRows);
        int i = 0, n = s.size(), id = 0;
        bool dr = true;

        while (i < n) {
            matrix[id].push_back(s[i]);

            if (id == numRows - 1) dr = false;
            if (id == 0) dr = true;

            if (dr) id++;
            else id--;

            i++;
        }

        string result;
        for(auto &x:matrix)
        {
            result+=x;
        }

        return result;
    }
};