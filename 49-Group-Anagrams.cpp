class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;

        for(auto str:strs){
            string s=str;
            sort(s.begin(),s.end());
            map[s].push_back(str);
        }
        vector<vector<string>> res;
        for(auto it:map){
            res.push_back(it.second);
        }

        return res;
    }
};