class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0;
        int r=0;
        unordered_set<int> s;
        int sum=0;
        int maxi=INT_MIN;

        while(r<nums.size()){
            if(s.find(nums[r]) == s.end()){
                sum+=nums[r];
                s.insert(nums[r]);
                maxi=max(maxi,sum);
                r++;
          }else{
            while(s.find(nums[r])!=s.end()){
                sum-=nums[l];
                s.erase(nums[l]);
                l++;
            }
          }
        }

        return maxi;

    }
};