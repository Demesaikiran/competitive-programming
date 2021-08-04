//https://binarysearch.com/problems/A-Unique-String

bool solve(string s) {
    int alpha[26] = {0};
    int slen = s.size();

    for(int i=0; i< slen; i++) {
        char ch = s[i];
        if(alpha[s[i] - 'a'] == 1)
            return false;
        else
            alpha[s[i] - 'a'] += 1;
    }
    return true;
    
}