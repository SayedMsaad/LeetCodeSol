class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(auto ar :nums){
            ans^=ar;
        }
        return ans;
    }
};