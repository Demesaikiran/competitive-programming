int solve(string s) {
    stack<char> brackets;
    int count = 0;
    for (char ch : s) {
        if (ch == '(') brackets.push(ch);
        if (ch == ')') {
            if (!brackets.empty()) {
                brackets.pop();
            } else
                count++;
        }
    }

    return brackets.size() + count;
}