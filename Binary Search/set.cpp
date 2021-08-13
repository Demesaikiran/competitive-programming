class CustomSet {
    public:
    vector<int> setds;
    map<int, int> Map;

    CustomSet() {
    }

    void add(int val) {
        if (Map.find(val) != Map.end()) return;
        int index = setds.size();
        setds.push_back(val);
        Map.insert(make_pair(val, index));
    }

    bool exists(int val) {
        return Map.find(val) != Map.end() ? true : false;
    }

    void remove(int val) {
        if (Map.find(val) == Map.end()) return;
        int index = Map[val];
        Map.erase(val);

        int last = setds.size() - 1;
        swap(setds[index], setds[last]);
        setds.pop_back();
        if (index != last) Map[setds[index]] = index;
    }
};

/*

            USING BINARY SEARCH  

class CustomSet {
    vector<int> root;

    public:
    CustomSet() {
    }

    void add(int val) {
        if (binary_search(root.begin(), root.end(), val)) return;
        auto itr = lower_bound(root.begin(), root.end(), val);
        root.insert(itr, val);
    }

    bool exists(int val) {
        return binary_search(root.begin(), root.end(), val);
    }

    void remove(int val) {
        if (!binary_search(root.begin(), root.end(), val)) return;
        auto itr = lower_bound(root.begin(), root.end(), val);
        root.erase(itr);
    }
};

*/