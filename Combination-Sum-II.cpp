class Solution {
public:
    void solve(int i,int target,vector<int> &ds,vector<int> &cand,vector<vector<int>> &ans){
        if(target <=0){
            //base case;
            ans.push_back(ds);
            return;
        }
    int prev;
        for(int j=i;j<cand.size();j++){
           
           if(j>i && cand[j] == cand[j-1]) continue;
           if(target<cand[j]) break;
                if(target>=cand[j]){
                    ds.push_back(cand[j]);
                    
                    solve(j+1,target-cand[j],ds,cand,ans);
                    ds.pop_back();
                }
            }  
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        solve(0,target,ds,candidates,ans);

        return ans;
    }
};