#include<bits/stdc++.h>
using namespace std;

int calculatePower2Sum(int N)
{
    // Golden rule of power 2 when we sum up the power of 2 we get cycle of 6 numbers.
    int arr[6] = {1, 2, 4, 8, 7, 5};

    return arr[ N % 6];
}

int main()
{
    int t; cin >> t;
    //Testcases t

    int N;

    while(t--){
        cin >> N;
        cout << calculatePower2Sum(N);
    }

}