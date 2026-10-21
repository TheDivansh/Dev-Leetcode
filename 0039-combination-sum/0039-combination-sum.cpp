class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<vector<int>>> uc(target + 1);
        uc[0].push_back(vector<int>());
        for (int i : candidates) {
            for (int j = i; j <= target; ++j) {
                for (auto &cs : uc[j - i]) {
                    vector<int> nCs = cs;
                    nCs.push_back(i);
                    uc[j].push_back(nCs);
                }
            }
        }
        return uc[target];
    }
};