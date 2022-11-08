//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> currency = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int index = 0;
        
        vector<int> result;
        
        while(N > 0 && index < 10)
        {
            if(N >= currency[index])
            {
                int count = N / currency[index];
                
                for(int i = 0; i < count; i++)
                    result.push_back(currency[index]);
                
                N -= currency[index] * count;
            }
            index++;
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1