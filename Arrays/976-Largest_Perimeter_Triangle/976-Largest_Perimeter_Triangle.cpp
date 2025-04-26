//Brute Force
//Time Complexity - O(N^3)
//Space Complexity - O(1)

//Property of Triangle - For three sides to form a triangle they should simultaneously satisfy following conditions
// a + b > c
// b + c > a
// a + c > b

int largestPerimeter(vector<int>& nums) {
    int ans = 0, n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                int perimeter = nums[i] + nums[k] + nums[j];
                if(nums[i] + nums[j] > nums[k] && nums[j] + nums[k] > nums[i] && nums[i] + nums[k] > nums[ j]) ans = max(ans, perimeter);
            }
        }
    }
    return ans;
}


//Optimal Approach
//Sorting the array reduces checking the condition from three to one
//Time Complexity - O(NLogN)
//Space Complexity - O(1)

int largestPerimeter(vector<int>& nums) {
    int n = nums.size(), ans = 0;
    sort(nums.begin(), nums.end());
    for(int i = n-3; i >= 0; i--){
        if(nums[i] + nums[i+1] > nums[i+2]) 
        ans = max(ans, nums[i] + nums[i+1] + nums[i+2]);
    }
    return ans;
}
