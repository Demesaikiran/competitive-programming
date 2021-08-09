//https://binarysearch.com/problems/Zipped-Iterator
/*         Solution-1           */
class ZippedIterator {
    public:
    vector<int> A;
    int index = 0;
    ZippedIterator(vector<int>& a, vector<int>& b) {
        int i = 0, j = 0;
        int cnt = 0;
        while (i < a.size() && j < b.size()) {
            if (cnt % 2 == 0) {
                A.push_back(a[i++]);
            } else {
                A.push_back(b[j++]);
            }
            cnt++;
        }
        while (i < a.size()) {
            A.push_back(a[i++]);
        }
        while (j < b.size()) {
            A.push_back(b[j++]);
        }
    }

    int next() {
        return A[index++];
    }

    bool hasnext() {
        return index < A.size();
    }
};


/*        Solution 2     */

class ZippedIterator {
    public:
    ZippedIterator(vector<int>& a, vector<int>& b) {
        load_solution(a, b);
    }

    int next() {
        int n = s.top();

        s.pop();
        return n ? n : 0;
    }

    bool hasnext() {
        return !s.empty();
    }

    private:
    stack<int> s;

    void load_solution(vector<int>& a, vector<int>& b) {
        int al = a.size();
        int bl = b.size();

        int minl = a.size() > b.size() ? b.size() : a.size();

        for (int i = a.size() - 1; i >= minl; --i) s.push(a[i]);
        for (int i = b.size() - 1; i >= minl; --i) s.push(b[i]);
        for (int i = minl - 1; i >= 0; --i) {
            s.push(b[i]);
            s.push(a[i]);
        }
    }
};













