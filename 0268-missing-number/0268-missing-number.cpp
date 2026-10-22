class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int>no(n+1,-1);
        for(int i =0;i<nums.size();i++){
            no[nums[i]] = nums[i];
        }
        for(int i =0;i<no.size();i++){
            if(no[i]==-1)return i;
        }
        return 0;
    }
};

