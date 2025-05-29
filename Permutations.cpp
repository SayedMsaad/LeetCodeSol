class Solution {
public:
    void solve(vector<int> &ds,vector<bool> &check,vector<int>&nums,vector<vector<int>> &ans){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }

        for(int it=0;it<nums.size();it++){
            if(!check[it]){
                ds.push_back(nums[it]);
                check[it]=true;
                solve(ds,check,nums,ans);
                ds.pop_back();
                check[it]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        vector<int> ds;
        vector<bool> check(nums.size(),false);
        
        solve(ds,check,nums,ans);

        return ans;
        
    }
};