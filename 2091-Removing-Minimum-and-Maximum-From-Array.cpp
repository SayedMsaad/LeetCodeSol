class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;

        int minpos,maxpos;

        for(int i=0;i<nums.size();i++){
            if(mini>nums[i]){
                minpos=i;
                mini=nums[i];
            }
            if(maxi<nums[i]){
                maxpos=i;
                maxi=nums[i];
            }
        }

        int onlyfront=0;
        int onlyback=0;
        
        onlyfront=max(maxpos,minpos)+1;
        onlyback=nums.size()-min(maxpos,minpos);
        int front = min(maxpos,minpos)+1;

        int back = nums.size()-max(maxpos,minpos);

        int total=front+back;

        return min(total,min(onlyfront,onlyback));

        

    }
};