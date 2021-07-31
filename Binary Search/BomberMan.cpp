int solve(vector<vector<int>>& matrix) {

    int count = 0;
    if(matrix.size() == 0) return 0;
    if(matrix.size() == 1 && matrix[0].size() == 1 && matrix[0][0] == 0) return 1;
    int row = matrix.size();
    int col = matrix[0].size();


    for(int i=0; i<matrix.size(); i++) {

        for(int j=0; j<matrix[i].size(); j++) {

            if(matrix[i][j] !=1 && (matrix[((i-1)+row) % row][j] ) != 1 && matrix[i][(j-1+col)%col] != 1 && matrix[(i+1)%row][j] != 1 && matrix[i][(j+1) % col] != 1)
            count++;
            else
            continue;
        }
    }
    return count;

    
}