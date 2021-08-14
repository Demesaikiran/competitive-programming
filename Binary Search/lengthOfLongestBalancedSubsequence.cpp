int solve(string s) {
    int lb = 0, rb = 0;
    for (char ch : s) {
        if (ch == '(') lb++;
        else{
            if (lb == 0) rb++;
            else lb--;
        }
    }
    return s.size() - lb - rb;
}