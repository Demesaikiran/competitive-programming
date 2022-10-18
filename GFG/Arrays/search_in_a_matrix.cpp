//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public: 
    int matSearch (vector <vector <int>> &matrix, int n, int m, int x)
    {
       if(n == 0) return 0;
        
        if(matrix[0][0] > x || matrix[n - 1][m - 1] < x) return 0;
        
        int i = 0, j = m - 1;
        
        while(i < n && j >= 0)
        {
            if(matrix[i][j] == x) return 1;
            
            if(matrix[i][j] > x) j--;
            
            else i++;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends

// // https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1