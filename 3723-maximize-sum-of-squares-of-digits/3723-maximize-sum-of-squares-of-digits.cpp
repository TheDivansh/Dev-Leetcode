class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";
        int qot = sum / 9;
        int rem = sum % 9;
        string ans;
        ans.reserve(num);
        ans.append(qot, '9');
        if (rem) ans.push_back('0' + rem);
        ans.append(num - qot - (rem > 0), '0');
        return ans;
    }
};