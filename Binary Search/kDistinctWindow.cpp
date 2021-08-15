vector<int> solve(vector<int>& nums, int k) {
    set<int> window;
    map<int, int> hashtable;
    vector<int> result;

    for (int i = 0; i < k; i++) {
        hashtable[nums[i]]++;
        window.insert(nums[i]);
    }
    result.push_back(window.size());

    for (int i = k; i < nums.size(); i++) {
        int prev = nums[i - k];
        hashtable[prev]--;
        if (hashtable[prev] == 0) window.erase(prev);
        int present = nums[i];
        if (hashtable.count(present) == 0 or
            (hashtable.count(present) > 0 and hashtable[present] == 0))
            window.insert(present);

        hashtable[present]++;
        result.push_back(window.size());
    }

    return result;
    /*
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
                result.push_back(result.back());
            }
            else {

                if(nums[i-1] == nums[i]) {
                    if(s.find(nums[i+k-1]) == s.end()) {
                        s.insert(nums[i+k-1]);
                        result.push_back(result.back() + 1);
                    }
                }
                else {
                    s.erase(s.find(nums[i-1]));
                    if(s.find(nums[i+k-1]) == s.end()) {
                        s.insert(nums[i+k-1]);
                        result.push_back(result.back());
                    }
                    else
                        result.push_back(result.back()-1);
                }
            }
        }

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
}

/**           CONCEPT                    **
 * Two pointer and array
 * https://leetcode.com/problems/minimum-window-substring/discuss/26808/here-is-a-10-line-template-that-can-solve-most-substring-problems
 * 
 * 
 * Approach-1:
 * vector<int> solve(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    vector<int> ret;
    for(int i = 0, dis = 0; i < nums.size(); i++) {
        if(m[nums[i]]++ == 0) dis += 1;
        if(i >= k and m[nums[i-k]]-- == 1) dis -= 1; 
        if(i >= k - 1) ret.push_back(dis);
    }
    return ret;
}

 * Approach-2:
 vector<int> solve(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < k; i++) {
        if (m[nums[i]]++ == 0) count++;
    }
    vector<int> ans;
    ans.push_back(count);
    for (int i = 1; i <= n - k; i++) {
        if (m[nums[i - 1]]-- == 1) count--;
        if (m[nums[i + k - 1]]++ == 0) count++;
        ans.push_back(count);
    }
    return ans;
}
*/
