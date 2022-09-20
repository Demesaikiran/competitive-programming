//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    void multiply(int x, vector<int>& multiplicand)
    {
        int carry = 0;
        vector<int> :: iterator it;
        
        for(it = multiplicand.begin(); it != multiplicand.end(); it++)
        {
            long long prod = (*it) * x + carry;
            *it = prod % 10;
            carry = prod / 10;
        }
        
        while(carry)
        {
            multiplicand.push_back(carry % 10);
            carry /= 10;
        }
    }
    vector<int> factorial(int N){
        vector<int> result;
        result.push_back(1);
        
        for(int i = 2; i <= N; i++)
            multiply(i, result);
            
        reverse(result.begin(), result.end());
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends