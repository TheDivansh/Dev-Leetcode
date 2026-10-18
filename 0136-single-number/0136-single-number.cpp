class Solution {
public:
        //Using XOR method & 0ms response time
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (int i : nums) { x ^= i; }
        return x;
    }
};