//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      set<int> hashSet;
      
      for(int i = 0; i < N; i++)
      {
          hashSet.insert(arr[i]);
      }
      
      int resultCount = 0;
      
      
      for(int i = 0; i < N; i++)
      {
          int num = arr[i];
          if(!hashSet.count(num - 1))
          {
              int current = num;
              int currentCount = 1;
              
              while(hashSet.count(current + 1))
              {
                  current++;
                  currentCount++;
              }
              
              resultCount = max(resultCount, currentCount);
          }
      }
      
      return resultCount;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends