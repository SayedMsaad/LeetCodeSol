class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> my_set;
        for (int i = 0; i < nums1.size(); i++) {

            int elem = nums1[i];
            for (int j = 0; j < nums2.size(); j++) {
                if (elem == nums2[j]) {
                    nums2[j] = -1;
                    // arr.push_back(elem);
                    my_set.insert(elem);
                    break;
                }
            }
        }
        vector<int> arr(my_set.begin(),my_set.end());
        return arr;
    }
};