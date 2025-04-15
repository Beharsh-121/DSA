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


//Better Approach
//Time Complexity - O(N), Each map lookup and insert is average-case O(1),  
//In rare worst-case (due to hash collisions), map operations can degrade to O(n) per op, but in practice, it's very fast
//Space Complexity - O(N)

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
       int numToFind = target - nums[i];
       if(mp.find(numToFind) != mp.end()) return {mp[numToFind], i};
       mp[nums[i]] = i;
    }
    return {0, 0};
 }