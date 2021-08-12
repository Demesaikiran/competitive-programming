//https://binarysearch.com/problems/Palindrome-Count


int solve(string s, int k) {
    int slen = s.size();
    unordered_set<char> sk;

    for(char c : s) sk.insert(c);

    return pow(sk.size(), (k+1)/2);

}

// One line solution
//     return pow(unordered_set<char>(begin(s),end(s)).size(), (k + 1) / 2);