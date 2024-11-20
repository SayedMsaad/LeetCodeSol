class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> map;

        for (auto it : nums) {
            map[it]++;
        }
        int maxi = INT_MIN;
        for (auto it : map) {
            maxi = max(maxi, it.second);
        }
        int ans = 0;
        for (auto it : map) {
            if (it.second == maxi) {
                ans += maxi;
            }
        }
        return ans;
    }
};