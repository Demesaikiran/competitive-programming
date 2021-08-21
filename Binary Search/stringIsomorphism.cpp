//https://binarysearch.com/problems/String-Isomorphism
// Its a basic math question where we need to check the mapping to the elements and consider
// Two char array of each 26 size (alphabets) tset and sset and map the elements accordingly
// as per given strings and ordering need to be maintained.
// map in both tset and sset accordingly if any one of those compromised then return false.

bool solve(string s, string t) {
    if (s.size() != t.size()) return false;

    char sset[27] = "__________________________";
    char tset[27] = "__________________________";

    for (int i = 0; i < s.size(); i++) {
        if (sset[s[i] - 'a'] == '_') {
            if (tset[t[i] - 'a'] == '_') {
                sset[s[i] - 'a'] = t[i];
                tset[t[i] - 'a'] = s[i];
            } else
                return false;
        } else {
            if (sset[s[i] - 'a'] != t[i]) return false;
        }
    }
    return true;
}