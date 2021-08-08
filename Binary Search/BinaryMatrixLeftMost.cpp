//https://binarysearch.com/problems/Binary-Matrix-Leftmost-One

int solve(vector<vector<int>>& matrix) {

    if(matrix.size() == 0) return -1;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int r = 0;
    int c = cols-1;
    int isZero = true;
    
    while(r < rows && c >= 0){

        if(matrix[r][c] == 1){
            c--;
            isZero = false;
        }
        else r++;
    }
    return !isZero ? c+1 : -1;
    

}