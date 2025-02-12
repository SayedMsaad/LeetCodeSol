class Solution {
    public int[] twoSum(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();

        int[] ans = new int[2];
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }

        int index = 0;
        for (int i = 0; i < n; i++) {
            if (map.containsKey(k - nums[i])) {
                if (nums[i] == k - nums[i]) {
                    if (map.get(nums[i]) == 2) {
                        map.put(k - nums[i], map.get(k - nums[i]));
                        ans[index] = i;
                        index++;
                    } else {
                        continue;
                    }
                } else {

                    map.put(k - nums[i], map.get(k - nums[i]) - 1);
                    ans[index] = i;
                    index++;
                }

            }

        }
        return ans;
    }
}