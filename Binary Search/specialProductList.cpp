// Naive approach
//https://binarysearch.com/problems/Special-Product-List

vector<int> solve(vector<int>& nums) {
    vector<int> prefix;
    vector<int> suffix;
    prefix.push_back(1);
    suffix.push_back(1);
    int nlen = nums.size();
    for (int i = 0, j = nlen - 1; i < nlen; i++, j--) {
        prefix.push_back(prefix.back() * nums[i]);
        suffix.push_back(suffix.back() * nums[j]);
    }

    for (int i = 0; i < nlen; i++) nums[i] = prefix[i] * suffix[nlen - i - 1];

    return nums;
}

// Optimal Solution with reg space complexity
vector<int> solve(vector<int>& a) {
    int n=a.size();
    vector<int>left(n,0),right(n,0),v(n,0);
    left[0]=a[0],right[n-1]=a[n-1];
    for(int i=1;i<n;i++)left[i]=left[i-1]*a[i];
    for(int i=n-2;i>=0;i--)right[i]=right[i+1]*a[i];
    v[0]=right[1];v[n-1]=left[n-2];
    for(int i=1;i<n-1;i++)v[i]=left[i-1]*right[i+1];
    return v;

}

vector<int> solve(vector<int>& nums) {
    int n = nums.size(), p = 1;
    vector<int> res(n, 1);
    for (int i = 0; i < n; i++) {
        res[i] *= p;
        p *= nums[i];
    }
    p = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= p;
        p *= nums[i];
    }
    return res;
}

