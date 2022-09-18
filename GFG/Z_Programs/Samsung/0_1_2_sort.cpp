//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int temp[3] = {0, 0, 0};
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0) temp[0] += 1;
            else if(a[i] == 1) temp[1] += 1;
            else temp[2] += 1;
        }
        
        int index = 0;
        
        for(int j = 0; j < 3; j++)
            for(int i = 0; i < temp[j]; i++)
                a[index++] = j;
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends