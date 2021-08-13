//https://binarysearch.com/problems/Square-of-a-List


vector<int> solve(vector<int>& nums) {
    if (nums.size() == 1) {
        nums[0] = pow(nums[0], 2);
        return nums;
    }

    int left = 0, right = nums.size() - 1;
    vector<int> res;

    for (int i = nums.size() - 1; i >= 0; i--) {
        if (abs(nums[left]) > nums[right]) {
            res.push_back(nums[left] * nums[left]);
            left++;
        } else {
            res.push_back(nums[right] * nums[right]);
            right--;
        }
    }
    int j = nums.size() - 1;
    for (int i = 0; i < nums.size(); i++) nums[i] = res[j--];

    return nums;
}