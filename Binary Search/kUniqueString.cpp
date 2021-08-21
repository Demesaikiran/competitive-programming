int solve(string s, int k) {
    int alpha[26] = {0};
    int mini = s.size() + 1;
    int count = 0, res = 0;

    for (char c : s) {
        if (alpha[c - 'a'] == 0) count++;
        alpha[c - 'a']++;
    }
    if (count < k) return 0;
    sort(alpha, alpha + 26);
    for (int i = 0; i < 26 && count > k; i++) {
        if (alpha[i] == 0)
            continue;
        else {
            count--;
            res += alpha[i];
        }
    }

    return res;
}