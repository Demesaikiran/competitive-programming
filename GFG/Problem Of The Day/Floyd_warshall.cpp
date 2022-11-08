//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n = matrix[0].size();
	    
	    for(int k = 0; k < n; k++)
	    {
	        for(int i = 0; i < n; i++)
	        {
	            for(int j = 0; j < n; j++)
	            {
	                if(i == k or j == k or matrix[i][k] == -1 or matrix[k][j] == -1)
	                    continue;
	                    
	                int path1 = matrix[i][j] == -1 ? INT_MAX : matrix[i][j];
	                int path2 = matrix[i][k] + matrix[k][j];
	                
	                matrix[i][j] = min(path1, path2);

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
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends