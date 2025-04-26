
    // Brute Force Approach
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    public boolean containsDuplicateBruteForce(int[] nums) {
        int n = nums.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }

    // Improved Approach
    // Time Complexity: O(n log n)
    // Space Complexity: O(1)
    public boolean containsDuplicateImproved(int[] nums) {
        Arrays.sort(nums); // sorts the array in-place
        int n = nums.length;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }

    // Optimal Approach
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    public boolean containsDuplicateOptimal(int[] nums) {
        Set<Integer> seen = new HashSet<>();
        for (int num : nums) {
            if (seen.contains(num)) {
                return true;
            }
            seen.add(num);
        }
        return false;
    }
