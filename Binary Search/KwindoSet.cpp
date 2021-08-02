vector<int> solve(vector<int>& nums, int k) {

    int count = 0;
    vector<int> result;

    unordered_set<int> s;
    for(int i=0; i<k; i++) {
        if(s.find(nums[i]) == s.end()) {
            s.insert(nums[i]);
            count++;
        }
    }
    result.push_back(count);

    for(int i=1; i<=nums.size()-k; i++) {
        if(nums[i-1] == nums[i+k-1]) {
            result.push_back(count);
        }
        else {

            if(nums[i-1] == nums[i]) {
                if(s.find(nums[i+k-1]) == s.end()) {
                    s.insert(nums[i+k-1]);
                    result.push_back(count+1);
                }
            }
            else {
                s.erase(s.find(nums[i-1]));
                if(s.find(nums[i+k-1]) == s.end()) {
                    s.insert(nums[i+k-1]);
                    result.push_back(count);
                }
            }
        }
    }
/*
    for(int i=0; i <= nums.size()-k; i++) {

        unordered_set<int> s;

        for(int j=i; j<i+k; j++) {

            if(s.find(nums[j]) == s.end()) {
                s.insert(nums[j]);
                count++;
            }
        }
        result.push_back(count);
        count =0;

    }
*/
    return result;
    
}