class Solution {
public:
        //0 ms solution
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i  = 0;
        vector<int> ans;
        for(auto w : words){
            if(w.find(x) != string::npos){
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};