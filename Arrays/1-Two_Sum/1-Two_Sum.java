//Brute Force Approach
// Time Complexity - O(N^2)
//Space Complexity - O(1)


for (int i = 0; i < nums.length; i++) {
    int numToFind = target - nums[i];
    for (int j = i + 1; j < nums.length; j++) {
        if (nums[j] == numToFind) {
            return new int[]{i, j};
        }
    }
}
return new int[]{-1, 1};


//Better Approach
//Time Complexity - O(N)
//Space Complexity - O(N)
public int[] twoSum(int[] nums, int target) {
        
    Map<Integer, Integer> mp = new HashMap<>();
    for(int i = 0; i < nums.length; i++){
      int numToFind = target - nums[i];
      if(mp.containsKey(numToFind)) return new int[] {mp.get(numToFind), i};
      mp.put(nums[i], i);
    }
    return new int[]{0, 0};
  }