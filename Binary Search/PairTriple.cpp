//https://binarysearch.com/problems/Pair-and-Triples

bool solve(string s) {
    int count[10];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < s.size(); i++) {
        int c = (int)(s[i] - '0');
        count[c]++;
    }
    bool seen_pair = false;
    for (int i = 0; i <= 9; i++) {
        if (count[i] % 3 == 2) {
            if (seen_pair) return false;
            seen_pair = true;
        } else if (count[i] % 3 != 0)
            return false;
    }
    return seen_pair;
}