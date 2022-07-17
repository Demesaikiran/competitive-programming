#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t; cin >> t;

	while(t--)
	{
		ll num; cin >> num;
		string mystr = to_string(num);
		reverse(mystr.begin(), mystr.end());

		cout << mystr << endl;
	}
}