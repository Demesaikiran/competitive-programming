//Link: https://binarysearch.com/problems/One-Integer

int solve(vector<int>& nums) {

    priority_queue<int, vector<int>, greater<int>> pq;

    for(auto i: nums) {
        pq.push(i);
    }

    int res =0;
    if(nums.size() == 0 or nums.size()==1) return 0;

    else {

        while(pq.size() > 1) {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            pq.push(first+second);
            res += first+second;
        }
    }

    return res;
    
}