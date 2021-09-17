// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int bittable[256];
    int rangetable[256];
    Solution()
    {
        bittable[0] = 0;
        rangetable[0] = 0;
        for(int i=1; i< 256; i++){
            bittable[i] = (i & 1) + bittable[i/2];
            rangetable[i] = bittable[i] + rangetable[i-1];
        }
    }
    int countSetBits(int n)
    {

        int res = 0;
        
        while( n != 0)
        {
            res += rangetable[n & 0xff];
            n >>= 8;
        }
        
        return res;
        
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends