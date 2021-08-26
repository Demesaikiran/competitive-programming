//https://binarysearch.com/problems/Missing-Numbers-From-1-to-N
//Solution-1<80.96>

vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    int index = 0;
    for (int val : nums) 
    {
        int index = abs(val) - 1;
        nums[index] = nums[index] > 0 ? -nums[index] : nums[index];
    }
    int ids = 0;

    for (int i = 0; i < n; i++)
        if (nums[i] > 0) nums[ids++] = i + 1;

    nums.resize(ids);

    return nums;
}

//Solution 2 <74.76>
vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> table(n + 1, 0);

    for (auto i : nums) table[i]++;

    vector<int> ans;
    for (int i = 1; i <= n; i++)
        if (table[i] == 0) ans.push_back(i);

    return ans;
}