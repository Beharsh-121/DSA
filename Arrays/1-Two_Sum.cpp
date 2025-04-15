//Brute Force Approach
// Time Complexity - O(N^2)
//Space Complexity - O(1)

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++){
        int numToFind = target - nums[i];
        for(int j = i+1; j < nums.size(); j++){
            if(nums[j] == numToFind) return {i, j};
        }
    }
    return {-1, 1};
}