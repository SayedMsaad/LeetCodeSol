class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        int i = 0;
        int j = 0;

        if (nums1.size() == 1 && nums1[0] == 0) {
            nums1.pop_back();
            nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
            return;
        } else if (n == 0) {
            return;
        } else {

            while (i < m && j < n) {
                if (nums1[i] <= nums2[j]) {
                    nums3.push_back(nums1[i]);
                    i++;

                } else {
                    nums3.push_back(nums2[j]);
                    j++;
                }
            }
            while (i < m) {
                nums3.push_back(nums1[i]);
                i++;
            }
            while (j < n) {
                nums3.push_back(nums2[j]);
                j++;
            }
            for (int i = 0; i < (n + m); i++) {
                nums1[i] = nums3[i];
            }
        }
    }
};
