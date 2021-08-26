//https://binarysearch.com/problems/Hash-Table


class HashTable {
    public:
    unordered_map<int, int> ht;
    HashTable(){}
    void put(int key, int val)
    {
        ht[key] = val;
    }
    int get(int key)
    {
        return !ht.count(key) ? -1 : ht[key];
    }
    void remove(int key)
    {
        ht.erase(key);
    }
    
};


/*
    struct compare {
        bool operator()(const pair<int, int>& value, const int& key)
        {
            return (value.first < key);
        }
        bool operator()(const int& key, const pair<int, int>& value)
        {
            return (key < value.first);
        }
    };
    vector<pair<int, int>> root;
    HashTable() {

    }

    void put(int key, int val) {
        auto itr = lower_bound(root.begin(), root.end(), key, compare());
        if(binary_search(root.begin(), root.end(), key, compare()))
        {
            itr -> second = val;
            return;
        }
        
        root.insert(itr, make_pair(key,val));
        
    }

    int get(int key) {
        if(!binary_search(root.begin(), root.end(), key, compare())) return -1;
        auto itr = lower_bound(root.begin(), root.end(), key, compare());
        return itr -> second;
    }

    void remove(int key) {
        if(!binary_search(root.begin(), root.end(), key, compare())) return;
        auto itr = lower_bound(root.begin(), root.end(), key, compare());
        root.erase(itr);
        
    }
    */

/*
class HashTable {
    public:
    vector<vector<pair<int, int>>> hashMap;

    HashTable() {
        hashMap = vector<vector<pair<int, int>>>(1000, vector<pair<int, int>>());
    }

    int findHash(int key) {
        return key % 1000;
    }

    void put(int key, int val) {
        int hashVal = findHash(key);

        for (int i = 0; i < hashMap[hashVal].size(); i++) {
            if (hashMap[hashVal][i].first == key) {
                hashMap[hashVal][i].second = val;
                return;
            }
        }

        hashMap[hashVal].push_back({key, val});
    }

    int get(int key) {
        int hashVal = findHash(key);

        for (int i = 0; i < hashMap[hashVal].size(); i++) {
            if (hashMap[hashVal][i].first == key) return hashMap[hashVal][i].second;
        }

        return -1;
    }

    void remove(int key) {
        int hashVal = findHash(key);
        int n = hashMap[hashVal].size();

        for (int i = 0; i < hashMap[hashVal].size(); i++) {
            if (hashMap[hashVal][i].first == key) {
                swap(hashMap[hashVal][i], hashMap[hashVal][n - 1]);
                hashMap[hashVal].pop_back();
            }
        }
        return;
    }
};
*/