class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int no_poss= pow(2,nums.size());
        vector<vector<int>> ans;

        for(int num = 0;num<no_poss;num++){
            vector<int> ds;
            for(int i=0;i<nums.size();i++){
                if(num &(1<<i)){
                    ds.push_back(nums[i]);
                }
    
            }
            ans.push_back(ds);
        }

        return ans;
    }
};