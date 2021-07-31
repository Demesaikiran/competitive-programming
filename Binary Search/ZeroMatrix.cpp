vector<vector<int>> solve(vector<vector<int>>& matrix) {

    if(matrix.size() == 0) return matrix;

    int row[matrix[0].size()] = {0};
    int column[matrix.size()] = {0};

    for(int i=0; i<matrix.size(); i++) {
        for(int j=0; j<matrix[i].size(); j++) {

            if(matrix[i][j] == 0) {

                row[i] = column[j] = 1;
            }

        }
    }

    for(int i=0; i<matrix.size(); i++) {
        
        if(row[i] == 1) {

            for(int j = 0; j<matrix[i].size(); j++)
                matrix[i][j] = 0;
        }
    }

    for(int i =0; i<matrix[0].size(); i++)
        if(column[i] == 1) {

            for(int j =0; j<matrix.size(); j++)
                matrix[j][i] = 0;
        }
    
    return matrix;
    

}