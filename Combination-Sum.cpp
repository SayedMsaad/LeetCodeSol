class Solution {
public:
    void solve(int i,int target,vector<int> &ds,vector<int> &cand,vector<vector<int>> &ans){
       if(i == cand.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;  
       } 

       int val=cand[i];
    //    
    //    cout<<target<<\ \<<i<<endl;
    //    if(target == 0) ans.push_back(ds);
       if(target>=val){
        ds.push_back(val);
        solve(i,target-val,ds,cand,ans);
        ds.pop_back();
       }
       
       solve(i+1,target,ds,cand,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,target,ds,candidates,ans);

        return ans;
    }
};