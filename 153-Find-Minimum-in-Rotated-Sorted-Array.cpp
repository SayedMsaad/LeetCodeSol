class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mini=INT_MAX;

        while(low<=high){
            int mid=(low+high)>>1;
            
            if(nums[low]<=nums[mid]){
                mini=min(nums[low],mini);
                low=mid+1;
            }else{
                mini=min(mini,nums[mid]);
                high=mid-1;
            }
            
        }

    return mini;
        
        }
};