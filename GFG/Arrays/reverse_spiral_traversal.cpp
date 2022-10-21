//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        
        if(R == 1 && C == 1) return {a[0][0]};
        
        vector<int> result(R * C);
        int index = 0;
        
        vector<vector<bool>> visited(R, vector<bool> (C, false));
        
        int row[] = {0, 1, 0, -1};
        int col[] = {1, 0, -1, 0};
        
        
        int x = 0, y = 0, direction = 0, n_elem = R * C;
        
        for(int i = 0; i < n_elem; i++)
        {
            visited[x][y] = true;
            
            result[index++] = a[x][y];
            
            int new_x = x + row[direction];
            int new_y = y + col[direction];
            
            if(new_x >= 0 && new_x < R && new_y >=0 && new_y < C && !visited[new_x][new_y])
            {
                x = new_x;
                y = new_y;
            }
            else
            {
                direction = (++direction) % 4;
                x += row[direction];
                y += col[direction];
            }
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends