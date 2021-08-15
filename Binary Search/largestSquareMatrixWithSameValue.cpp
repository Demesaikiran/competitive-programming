int square(int &a, int &b, int &c)
{
    if(a <= b && a <= c)    return a;
    else if(b <= a && b <= c)    return b;
    return c;
}

int solve(vector<vector<int>>& matrix) {
    int r = matrix.size();
    int c = matrix[0].size();

    vector<vector<int>> dp(r, vector<int> (c));
    int index = 0;

    for(int i=0; i<r; i++)
        dp[i][0] = 1;
    for(int i=0; i<c; i++)
        dp[0][i] = 1;

    int m = 1;

    for(int i=1; i< r; i++){
        for(int j=1; j<c; j++){

            int pres = matrix[i][j];

            if(pres == matrix[i-1][j-1] && pres == matrix[i][j-1] && pres == matrix[i-1][j])
            {
                dp[i][j] = square(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + 1;

            }
            else
            {
                dp[i][j] = 1;
            }
            if(dp[i][j] > m)
                m = dp[i][j];
        }
    }

    return m;
    
}