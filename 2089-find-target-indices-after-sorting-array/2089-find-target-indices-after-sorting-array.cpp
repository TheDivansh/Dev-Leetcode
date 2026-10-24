class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i=0, j=0;
        for(int x: nums){
            i+=(x<target);
            j+=(x==target);
        }
        iota(nums.begin(), nums.begin()+j, i);
        nums.resize(j);
        return nums;
    }
};