class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int even = 0;
        int odd = 0;

        int first =-1;
        int second =-1;

        //we go for even index;

        //even is greater than next element

        for(int i=0;i<nums.size();i++){
            if(i+1<nums.size()){
                if(first ==-1 && second ==-1){
                    first =nums[i];
                    second=nums[i+1];
                }else{
                    second = nums[i+1];
                }

                cout<<first<<" "<<second<<endl;

                if(i% 2 ==0){
                    if(first <=second){
                        int diff = second -first;
                        even+=diff+1;
                        second = second -(diff+1);
                    }
                }else{
                    if(first>=second){
                        int diff = first -second;
                        even+=diff+1;
                        first = first -(diff+1);
                        // first = second ;
                    }
                }
                first = second;
            }
        }
first =-1;
second =-1;
//do same for the odd index also
// but now first will be smaller thean second
         for(int i=0;i<nums.size();i++){
            if(i+1<nums.size()){
                if(first ==-1 && second ==-1){
                    first =nums[i];
                    second=nums[i+1];
                }else{
                    second = nums[i+1];
                }

                // cout<<first<<" "<<second<<endl;

                if(i% 2 ==0){
                    if(first >=second){
                        int diff = first - second;
                        odd+=diff+1;
                        first = first -(diff+1);
                    }
                }else{
                    if(first<=second){
                        int diff = second -first;
                        odd+=diff+1;
                        second = second -(diff+1);
                        // first = second ;
                    }
                }
                first = second;
            }
        }

        return min(even,odd);
        
    }
};