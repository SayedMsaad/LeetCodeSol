class Solution {
public:
//approuch 1;
    // void solve(vector<int> &ds,vector<bool> &check,vector<int>&nums,vector<vector<int>> &ans){
    //     if(ds.size() == nums.size()){
    //         ans.push_back(ds);
    //         return;
    //     }

    //     for(int it=0;it<nums.size();it++){
    //         if(!check[it]){
    //             ds.push_back(nums[it]);
    //             check[it]=true;
    //             solve(ds,check,nums,ans);
    //             ds.pop_back();
    //             check[it]=false;
    //         }
    //     }
    // }
//approuch 2
    void solve(int i,vector<int> &nums,vector<vector<int>> &ans){
        if(i == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            solve(i+1,nums,ans);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        vector<int> ds;
        vector<bool> check(nums.size(),false);
        
        solve(0,nums,ans);

        return ans;
        
    }
};