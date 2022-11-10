//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long x) {
       if(x <= 10) return x;
       
       queue<int> q;
       
       for(int i = 1; i < 10; i++)
            q.push(i);
       
      
        int ans = 0;
        while(q.size())
        {
            int digit = q.front();
            q.pop();
            
            ans = max(ans, digit);
            
            int rem = digit % 10;
            
            if(rem == 0){
                if(digit * 10 + 1 <= x) q.push(digit * 10  + 1);
            }
                
            else if(rem == 9){
                if(digit * 10 + 8 <= x) q.push(digit * 10 + 8);
            }
                
            else
            {
                if(digit * 10 + rem + 1 <= x) q.push(digit * 10 + rem + 1);
                if(digit * 10 + rem - 1 <= x) q.push(digit * 10 + rem - 1);
            }
            
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends