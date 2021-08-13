int solve(vector<int>& nums) {
    int maxsf = nums[0];
    int temp = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        temp = max(nums[i], temp + nums[i]);
        maxsf = max(maxsf, temp);
    }
    return maxsf;
}