class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //   for(int i=0;i<nums.size();i++)
        int i=0;
        int n = nums.size();
          while(i!=(n-1))
          {
            if(nums[i]== 0){
                int j = i;
                int temp;
                while(j!=(n-1)){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    
                    j++;
                }
                n=n-1;
            }
            else{
                i++;
            }
            // i++;
            
        }
    }
};