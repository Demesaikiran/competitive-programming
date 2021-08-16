

int solve(vector<int>& nums) {
    int numlen = nums.size();

    switch(numlen)
    {
        case 0: return 0;
        case 1: return nums[0] > 0 ? nums[0] : 0;
        case 2: 
        {
            int temp = max(nums[0], nums[1]);
            return temp > 0 ? temp : 0;
        }
    }
    
    int include = nums[0] > 0 ? nums[0] : 0;
    int exclude = 0;
    int exclude_new;

    for(int i=1; i<numlen; i++)
    {
        exclude_new = (include >= exclude) ? include : exclude;
        int temp = nums[i] > 0 ? nums[i]:0;
        include = exclude + temp;
        exclude = exclude_new;
    }

    return ((include > exclude) ? include : exclude);

}

//   Dynamic approach

int solve(vector<int>& a) {
    int n=a.size();
    if(n==0||n==1){
        if(n==0||a[0]<0)return 0;
        else return a[0];
    }
    int dp[n]={0};
    dp[0]=max(a[0],0);
    dp[1]=max(max(a[1],0),a[0]);
    for(int i=2;i<n;i++){
        dp[i]=max(dp[i-2]+a[i],dp[i-1]);
    }
    return dp[n-1];
}