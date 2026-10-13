class Solution {
public:
        //DailyQ
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sqr(n);
        for (int i = 0; i < n; i++) sqr[i] = 1LL * nums[i] * nums[i];

        sort(sqr.begin(), sqr.end());

        long long ans = 0;
        int nb = n / 2;

        for (int i = 0; i < nb; i++) ans -= sqr[i];

        for (int i = nb; i < n; i++) ans += sqr[i];

        return ans;
    }
};