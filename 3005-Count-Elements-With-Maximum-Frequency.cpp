class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> map;
        int maxi=INT_MIN;

        for(int it:nums){
            map[it]++;
            maxi=max(maxi,map[it]);
        }
        int ans=0;
        for(auto it:map){
            if(it.second==maxi){
                ans+=maxi;
            }
        }
        return ans;
    }
};