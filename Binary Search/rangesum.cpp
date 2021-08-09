//https://binarysearch.com/problems/Range-Query-on-a-List

class RangeSum {
    public:
    int arr[100000];

    RangeSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) arr[i + 1] = arr[i] + nums[i];
    }

    int total(int i, int j) {
        return arr[j] - arr[i];
    }
};