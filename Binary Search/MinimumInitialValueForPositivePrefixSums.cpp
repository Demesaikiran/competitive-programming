int solve(vector<int>& nums) {

    if (nums.size() == 0) return 1;
    
    int mini = nums[0];
    int initial=0;
    if(mini < 0) initial = abs(mini)+1;
    int size = nums.size();

    for(int i=1; i<size; i++) {

        nums[i] += nums[i-1];
        if(nums[i] < mini)
            mini = nums[i];
    }
    if(mini <= 0) {
        if(abs(mini)+1 < initial) return initial;
        else return abs(mini)+1;
    }
    return 1;
}