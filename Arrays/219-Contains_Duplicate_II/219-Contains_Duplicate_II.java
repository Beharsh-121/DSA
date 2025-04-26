    // Brute Force Approach
    // Time Complexity - O(N^2)
    // Space Complexity - O(1)
    public boolean containsNearbyDuplicateBruteForce(int[] nums, int k) {
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j] && Math.abs(i - j) <= k) {
                    return true;
                }
            }
        }
        return false;
    }

    // Optimal Approach
    // Time Complexity - O(N)
    // Space Complexity - O(N)
    public boolean containsNearbyDuplicateOptimal(int[] nums, int k) {
        int n = nums.length;
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < n; i++) {
            if (map.containsKey(nums[i]) && Math.abs(i - map.get(nums[i])) <= k) {
                return true;
            } else {
                map.put(nums[i], i);
            }
        }
        return false;
    }

}
