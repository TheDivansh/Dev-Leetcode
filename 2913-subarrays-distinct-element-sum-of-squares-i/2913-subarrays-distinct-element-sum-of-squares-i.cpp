class Solution {
public:
        //Daily Q
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sol = 0;
        for (int i = 0; i < n; i++) {
            bitset<101> scan;
            for (int j = i; j < n; j++) {
                scan.set(nums[j]);
                int d = scan.count();
                sol += d * d;
            }
        }
        return sol;
    }
};