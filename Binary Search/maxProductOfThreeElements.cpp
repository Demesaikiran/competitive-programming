//https://binarysearch.com/problems/Max-Product-of-Three-Numbers

int solve(vector<int>& nums) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    if (nums.size() < 3) return -1;
    if (nums.size() == 3) return nums[0] * nums[1] * nums[2];

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2) {
            max3 = max2;
            max2 = nums[i];
        } else if (nums[i] > max3) {
            max3 = nums[i];
        }

        if (nums[i] < min1) {
            min2 = min1;
            min1 = nums[i];
        } else if (nums[i] < min2) {
            min2 = nums[i];
        }
    }
    return max(min1 * min2 * max1, max1 * max2 * max3);
}