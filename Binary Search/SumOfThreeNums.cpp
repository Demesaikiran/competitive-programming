bool solve(vector<int>& nums, int k) {

    int left, right;
    if(nums.size() == 1 || nums.size() == 2) return false;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size()-2; i++) {

        left = i + 1;
        right = nums.size()-1;

        while(left < right) {
            if(nums[i] + nums[left] + nums[right] == k) 
                return true;
            else if(nums[i] + nums[left] + nums[right] < k)
                left++;
            else
                right--;
        }
    }

    return false;
    
}