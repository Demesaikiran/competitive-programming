int solve(vector<vector<int>>& matrix) {
    if (matrix.size() == 0) return 0;
    if (matrix.size() == 1 && matrix[0].size() == 1 && matrix[0][0] == 0) return 1;
    set<int> seti;
    set<int> setj;
    int count = 0;
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 1) {
                seti.insert(i);
                setj.insert(j);
            } else
                continue;
        }
    }

    return ((row - seti.size()) * (col - setj.size()));
}
