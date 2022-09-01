// { Driver Code Starts
//Initial Template for C++
// https://practice.geeksforgeeks.org/batch-problems/lucky-numbers2911/0/?track=DSASP-Recursion&batchId=154


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    bool isLucky(int n) {
        for(int i = 2; i <= n; i++)
        {
            if(n%i ==0 )
                return false;
            if(i > n)
                return true;
            n = n - (n / i);
        }
        return true;
    }
};

// { Driver Code Starts.
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}  // } Driver Code Ends