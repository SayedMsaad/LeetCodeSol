class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1;

        //find the braking point of the array

        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        cout<<ind;

        if(ind == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=nums.size()-1;i>=0;i--){
            if(nums[ind]<nums[i]){
                swap(nums[ind],nums[i]);
                break;
            }
        }

        reverse(nums.begin()+ind+1,nums.end());
        
    }
};