class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        const int n=nums.size();
        vector<int> ans(n);
        int ls=0;
        int rs=accumulate(nums.begin(), nums.end(), 0);
        for(int i=0; i<n; i++){
            const int x=nums[i];
            rs-=x;
            ans[i]=(rs>=ls)?rs-ls:ls-rs;
            ls+=x;
        }
        return ans;
    }
};