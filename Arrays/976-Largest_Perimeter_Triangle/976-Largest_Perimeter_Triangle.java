//Brute Force
//Time Complexity - O(N^3)
//Space Complexity - O(1)

import java.util.Arrays;

public int largestPerimeter(int[] nums) {
        int ans = 0;
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    int a = nums[i], b = nums[j], c = nums[k];
                    if (a + b > c && a + c > b && b + c > a) {
                        ans = Math.max(ans, a + b + c);
                    }
                }
            }
        }
        return ans;
    }



//Optimal Approach
//Sorting the array reduces checking the condition from three to one
//Time Complexity - O(NLogN)
//Space Complexity - O(1)


    public int largestPerimeter(int[] nums) {
        Arrays.sort(nums);
        for (int i = nums.length - 3; i >= 0; i--) {
            if (nums[i] + nums[i + 1] > nums[i + 2]) {
                return nums[i] + nums[i + 1] + nums[i + 2];
            }
        }
        return 0;
    }
