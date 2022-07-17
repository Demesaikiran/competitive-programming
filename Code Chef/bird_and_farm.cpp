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
		ll x, y, z; cin >> x >> y >> z;

		if(z % x == 0)
			if(z % y == 0)
				cout << "ANY" << endl;
			else
				cout << "CHICKEN" << endl;
		else if(z % y == 0)
			cout << "DUCK" << endl;
		else
			cout << "NONE" << endl;
	}
}