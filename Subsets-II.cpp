class Solution {
public:
    void solve(int i,vector<int> &ds,vector<vector<int>> &ans,vector<int> &nums){
        
       ans.push_back(ds);

        for(int j= i;j<nums.size();j++){
            if(j>i && nums[j] == nums[j-1]) continue;
            ds.push_back(nums[j]);
            solve(j+1,ds,ans,nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> ds;
        solve(0,ds,ans,nums);
        return ans;
    }
};