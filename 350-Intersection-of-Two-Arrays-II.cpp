class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for (int i = 0; i < nums1.size(); i++) {

            int elem = nums1[i];
            for (int j = 0; j < nums2.size(); j++) {
                if (elem == nums2[j]) {
                    nums2[j] = -1;
                    arr.push_back(elem);
                    
                    break;
                }
            }
        }
        return arr;
    }
};