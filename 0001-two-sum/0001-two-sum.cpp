class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  vector<pair<int, int>> res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            res.push_back({nums[i], i});
        }
        sort(res.begin(), res.end());
        int s = 0, e = n-1;
        while(s<e){
            if(res[s].first + res[e].first == target){
                return {res[s].second, res[e].second};
            }
            else if(res[s].first + res[e].first < target){
                s++;
            }
            else e--;
        }
        return {};
    }
};