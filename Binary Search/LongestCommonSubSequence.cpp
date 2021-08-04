//https://binarysearch.com/problems/Longest-Common-Subsequence


int solve(string a, string b) {

    int alen = a.size();
    int blen = b.size();
    int lcs_table[alen+1][blen+1];

    for(int i=0; i<=alen; i++) {
        for(int j=0; j<=blen; j++) {

            if(i == 0 or j == 0) lcs_table[i][j] = 0;
            else if(a[i-1] == b[j-1])
                lcs_table[i][j] = lcs_table[i-1][j-1] + 1;
            else
                lcs_table[i][j] = max(lcs_table[i-1][j], lcs_table[i][j-1]);
        }
    }

    return lcs_table[alen][blen];

    
}