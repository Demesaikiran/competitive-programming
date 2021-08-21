int solve(string s) {
    int difference=0;

    for (char digit : s) {
        difference += digit == '1' ? 1 : -1;
    }
    return abs(difference);
}