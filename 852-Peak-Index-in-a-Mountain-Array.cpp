class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low =0;
        int high=arr.size()-1;
      
        if(arr[low]>arr[low+1]){
            return arr[low];
        }else{
            low++;
        }

        if(arr[high]>arr[high-1]){
            return high;
        }else{
            high--;
        }
        while(low<high){
            int mid =(low + high) / 2;

            if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
                low=mid+1;
            }else{
                high = mid;
            }
        }
        return high;
    }
};