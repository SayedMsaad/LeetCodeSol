class Solution {

public:
    int solve(int pos,vector<int>&arr,vector<int>& dp){
        if(pos>=arr.size()){
            return 0;
        }
        if(dp[pos]!=-1){
            return dp[pos];
        }
        
        int n1=solve(pos+2,arr,dp)+arr[pos];
        int n2=solve(pos+1,arr,dp);
        return dp[pos]=max(n1,n2);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(0,nums,dp);
    }
};