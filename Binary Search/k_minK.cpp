int solve(vector<int>& nums) {
    set<int> neg;
    int max = INT_MIN;

    for (int i : nums)
        if (i <= 0) neg.insert(i);

    for (int i : nums) {
        if (i >= 0)
            if (i > max and neg.count(-1 * i))
                max = i;
            else
                continue;
    }

    return max == INT_MIN ? -1 : max;
}