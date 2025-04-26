//Brute Force Approach
//Time Complexity - O(N^2)
//Space Complexity - O(1)


bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i] == nums[j] and abs(i - j) <= k) return true;
        }
    }
    return false;
}


//Optimal Approach
//Time Complexity - O(N)
//Space Complexity - O(N)

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int,int>mp;

    for(int i = 0; i < n; i++){
       if(mp.find(nums[i]) != mp.end() and abs(i - mp[nums[i]]) <= k) return true;
       else mp[nums[i]] = i;
    }
    return false;
}