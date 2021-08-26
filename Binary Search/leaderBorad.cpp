//https://binarysearch.com/problems/Leaderboard


vector<int> solve(vector<int>& nums) {
    map<int, int, greater<int>> hashmap;
    int count =0;
    for(int i: nums) hashmap[i]++;
    for(auto i = hashmap.begin(); i!= hashmap.end(); i++) i -> second = count++;
    int nlen = nums.size();
    for(int i=0; i< nlen; i++) nums[i] = hashmap[nums[i]];
    return nums;
}


// Another solution with linear time complexity
vector<int> solve(vector<int>& v) {
    set<int> s(v.begin(), v.end());
    vector<int> ans;
    unordered_map<int, int> rank;
    int j = s.size() - 1;
    for (auto i : s) rank[i] = j--;
    for (auto i : v) ans.push_back(rank[i]);
    return ans;
}