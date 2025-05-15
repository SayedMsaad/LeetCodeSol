class Solution {
public:

    int solve(vector<vector<int>> &arr,int i,int j,vector<vector<int>>&dp){
        if(i==arr.size()-1){
            return arr[i][j];
        }
        int ans=0;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int left = solve(arr,i+1,j,dp);
        int right = solve(arr,i+1,j+1,dp);
        ans = arr[i][j]+min(left,right);
        dp[i][j]=ans;
        return ans;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int ans = 0;
        int n = triangle.size();
       vector<vector<int>> dp(n,vector<int>(n,-1));

        ans = solve(triangle,0,0,dp);
        // cout<<dp[2][1];

        return ans;
    }
};