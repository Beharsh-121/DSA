//Brute Force Approach
//Time Complexity -  O(n^2)
//Space Complexity - O(1)

bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

//Improved Approach
//Time Complexity - O(NlogN)
//Space Complexity - O(1)

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1])
            return true;
    }
    return false;
}

//Optimal Approach
//Time Complexity - O(N)
//Space Complexity - O(N)

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num) > 0)
            return true;
        seen.insert(num);
    }
    return false;
}