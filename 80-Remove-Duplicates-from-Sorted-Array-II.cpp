class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =1;
        int j=1;
         
         for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1])
            {
                if(count!=2){
                    count++;
                    nums[j]=nums[i];
                    j++;
                }
            }else if(nums[i]!=nums[i-1]){
                count=1;
                nums[j]=nums[i];
                j++;
            }
            
         }
         return j;
    }
};