class HitCounter {
    public:
    queue<int> nums;
    HitCounter() {        
    }

    void add(int timestamp) {
        nums.push(timestamp);
    }

    int count(int timestamp) {
        
        int temp = nums.front();
        //nums.push(timestamp);
        int count = nums.size();
        while(temp < timestamp - 60 && count >0)
        {
            nums.pop();
            count--;
            temp = nums.front();
        }
        
        return count ;

    }
};