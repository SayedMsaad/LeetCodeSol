class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        int mid=s + ((e-s)/2);
        int key =target;
        vector<int> out;

        while(s<=e){
            if(key == nums[mid]){
                ans = mid;
                e=mid-1;
            }
            else if(key>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s + ((e-s)/2);
        }
        out.push_back(ans);

        ans=-1;
        s =0;
        e=nums.size()-1;
        mid=s + ((e-s)/2);
        while(s<=e){
            if(key == nums[mid]){
                ans = mid;
                s=mid+1;
            }
            else if(key>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s + ((e-s)/2);
        }
        out.push_back(ans);

        return out;
    }
};