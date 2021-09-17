// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int sum = 0;
    //Complete this function
    int digitalRoot(int n)
    {
        if(n / 10 == 0) 
            if(sum + n / 10 == 0) return sum+n;
            else
            {
                n = sum + n;
                sum = 0;
                return digitalRoot(n);
            }
            
        sum += n % 10;

        return digitalRoot(n/10);
    }
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends