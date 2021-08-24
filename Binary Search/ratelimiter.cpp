class RateLimiter {
    public:
    RateLimiter(int expire) {
        exp = expire;
    }

    bool limit(int uid, int timestamp) {
        unordered_map<int, int>::iterator itr = userExp.find(uid);
        if (itr == userExp.end()) {
            userExp[uid] = timestamp;
            return false;
        } else {
            if (timestamp < itr->second + exp) {
                return true;
            }
            userExp[uid] = timestamp;
            return false;
        }
    }

    private:
    unordered_map<int, int> userExp;

    int exp;
};