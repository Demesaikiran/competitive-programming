//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        
        int R = matrix.size(), C = matrix[0].size();
        
        vector<vector<int>> temp(R, vector<int>(C));
        
        for(int x = 0; x < R; x++)
            for(int y = 0; y < C; y++)
                temp[x][y] = matrix[x][y];
        
        int row[] = {1, 0, -1, 0};
        int col[] = {0, 1, 0, -1};
        
        for(int x = 0; x < R; x++)
        {
            for(int y = 0; y < C; y++)
            {
                
                if(temp[x][y] == 0)
                {
                    int sum_value = 0;
                    for(int i = 0; i < 4; i++)
                    {
                        int temp_x = x + row[i];
                        int temp_y = y + col[i];
                        
                        if(temp_x >= 0 && temp_x < R && temp_y >= 0 && temp_y < C)
                        {
                            sum_value += temp[temp_x][temp_y];
                            matrix[temp_x][temp_y] = 0;
                        }
                    }
                    matrix[x][y] = sum_value;
                }

            }
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends