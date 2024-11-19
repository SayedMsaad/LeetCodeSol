class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int>map;
        for(int val:arr){
            map[val]++;
        }
        for(auto i:map){
            for(auto j:map){
                if(j.first!=i.first && j.second == i.second){
                    return false;
                }
            }
        }
        return true;
    }
};