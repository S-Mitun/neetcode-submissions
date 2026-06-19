class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> maps;
        vector<vector<string>> ans;
        for(auto i : strs){
            string s=i;
            sort(s.begin(),s.end());
            maps[s].push_back(i);
        }

        for(auto &j : maps){
            ans.push_back(j.second);
        }
        return {ans};
    }
};
