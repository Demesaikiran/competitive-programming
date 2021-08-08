// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int> res;
        if(n == 0){
            res.push_back(-1);
            return res;
            
        }
        
        if(n == 1 && arr[0] == s){
            res.push_back(1);
            res.push_back(1);
            return res;
        }
        
        
        long long sum =arr[0];
        int i=0, j=1;
        
        for( j =1; j<=n; j++){

		while(sum > s && i < j) {
			sum -= arr[i];
			i++;
		}

		if(sum == s) {
			res.push_back(i+1);
			res.push_back(j);
			return res;
		}

		if(j < n)
			sum += arr[j];
		
	}
	
	res.push_back(-1);
	return res;
        
        
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends