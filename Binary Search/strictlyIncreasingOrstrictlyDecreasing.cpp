bool solve(vector<int>& nums) {
    int numlen = nums.size();
    int flag;
    flag = nums[1] - nums[0];
    if(flag  > 0){
        for(int i=1; i< numlen; i++)
            if(nums[i] > nums[i-1]) continue;
            else return false;
        return true;
    }

    else{
        for(int i=1; i< numlen; i++)
            if(nums[i] < nums[i-1]) continue;
            else return false;
        return true;
    }
}