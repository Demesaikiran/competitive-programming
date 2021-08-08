string solve(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            bool one = true, two = true;
            if (i > 0) {
                if (s[i - 1] - '0' == 1) one = false;
                if (s[i - 1] - '0' == 2) two = false;
            }
            if (i < s.size() - 1) {
                if (s[i + 1] - '0' == 1) one = false;
                if (s[i + 1] - '0' == 2) two = false;
            }
            if (one) {
                s[i] = '1';
            } else if (two)
                s[i] = '2';
            else
                s[i] = '3';
        }
    }
    return s;
}