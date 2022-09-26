//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int, vector<int>, greater<int>> pq;
	    vector<int> result;
	    
	    for(int i = 0; i < n; i++)
	    {
	        pq.push(arr[i]);
	        
	        if(pq.size() > k) pq.pop();
	    }
	    
	    while(!pq.empty())
	    {
	        result.push_back(pq.top());
	        pq.pop();
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends