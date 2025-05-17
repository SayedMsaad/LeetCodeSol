class Solution {
public:

    int solve(vector<vector<int>> &arr,int i,int j,vector<vector<int>> &dp){
        if(i == arr.size()-1){
            return arr[i][j];
        }
        if(dp[i][j]!=-1){
         return dp[i][j];
        }else{
         return dp[i][j]=arr[i][j]+min(solve(arr,i+1,j,dp), solve(arr,i+1,j+1,dp));
        }
        
    }
    int minimumTotal(vector<vector<int>>& tri) {
      int ans = 0;
      int n= tri.size();
      vector<vector<int>> dp(n,vector<int>(n,-1));

      ans = solve(tri,0,0,dp);

      return ans;
    }
};