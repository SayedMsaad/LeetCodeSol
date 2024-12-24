class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int totalSum=0;

       for(int i=0;i<nums.size();i++){
        totalSum+=nums[i];
       }
        int Lsum=0;
       for(int i=0;i<nums.size();i++){
        if(Lsum == (totalSum -Lsum)-nums[i]){
            return i;
        }
        Lsum+=nums[i];
       }

    return -1;
    }
};