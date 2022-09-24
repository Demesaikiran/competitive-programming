//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        
        long long ans = 0;
        unordered_map<string, int> dictionary;
        
        for(int i = 0; i < N; i++)
            dictionary[to_string(numbers[i])]++;
            
        string x = to_string(X);
        
        for(int i = 0; i < x.size(); i++)
        {
            string first = x.substr(0, i);
            string second = x.substr(i);
            
            if(first == second)
                ans += dictionary[first] * (dictionary[second] - 1);
                
            else
                ans += dictionary[first] * dictionary[second];
                
        }
        
        return ans;
        
    }
}; 

//{ Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}
// } Driver Code Ends