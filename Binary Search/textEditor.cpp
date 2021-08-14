string solve(string s) {
    if (s == "") return s;

    string result;

    for (int i = 0; i < s.size(); i++) {
        if (result.empty()) {
            if (s[i] == '<' and s[i + 1] == '-') {
                i++;
                continue;
            } else
                result.push_back(s[i]);
        } else {
            if (s[i] == '<' and s[i + 1] == '-') {
                result.pop_back();
                i++;
            } else
                result.push_back(s[i]);
        }
    }

    return result;
}