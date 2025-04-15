//Better Approach
//Time Complexity - O(N)
//Space Complexity - O(1)
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n-1;
    while(low < high){
        int twoSum = nums[low] + nums[high];
        if(twoSum == target) return{low+1, high+1};
        else if(twoSum < target) low++;
        else high--;
    }
    return {};
}