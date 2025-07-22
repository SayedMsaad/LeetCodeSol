class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0;
        int r=0;
        unordered_set<int> s;
        int sum=0;
        int maxi=INT_MIN;
        int lsum;
        vector<int> mp(10001,-1);

        vector<int> csum(nums.size(),0);
        csum[0]=nums[0];

        for(int i=1;i<nums.size();i++){
            csum[i]=csum[i-1]+nums[i];
        }

        while(r<nums.size()){
            if(mp[nums[r]]==-1){
                mp[nums[r]]=r;
                lsum=l==0?0:csum[l-1];
               sum=csum[r]-lsum;
               maxi=max(sum,maxi);
               r++;
            }else{
                l=max(l,mp[nums[r]]+1);
                mp[nums[r]]=r;
                lsum=l==0?0:csum[l-1];
               sum=csum[r]-lsum;
               maxi=max(sum,maxi);
               r++;
            }
        }

    
        return maxi;

    }
};