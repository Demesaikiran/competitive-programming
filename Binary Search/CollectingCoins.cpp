//https://binarysearch.com/problems/Collecting-Coins

int solve(vector<vector<int>>& matrix) {

    int rows = matrix.size();
    int columns = matrix[0].size();

    for(int i=1; i< columns; i++) matrix[0][i] = matrix[0][i] + matrix[0][i-1];
    for(int i=1; i< rows; i++) matrix[i][0] = matrix[i][0] + matrix[i-1][0];


    for(int i=1; i< rows; i++)
        for(int j=1; j < columns; j++)            
            matrix[i][j] = matrix[i][j] + max(matrix[i-1][j], matrix[i][j-1]);

    return matrix[rows-1][columns-1];
    
}