int solve(vector<int>& nums) {
    unordered_map<int, int> hashtable;

    if (nums.size() == 0) return 0;
    int nlen = nums.size();
    int ans = 0;
    for (int i = 0; i < nlen; i++) ans += hashtable[nums[i]]++;

    return ans;
}