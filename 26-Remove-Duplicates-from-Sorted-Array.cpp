class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =1;

        int size= nums.size()-1;
        vector<int>arr;
        arr.push_back(nums[0]);
        int j=0;
        for(int i=0;i<=size;i++){
            if(nums[i]!=nums[j]){
            count ++;
            j=i;
            arr.push_back(nums[i]);
            }
            }
        
       
    //    for(auto it:arr){
    //     cout<<it;
    //    }

        nums.clear();
        nums.insert(nums.end(),arr.begin(),arr.end());
        return count;
    }
};