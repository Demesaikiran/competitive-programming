#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

//To use string datatype, include<string>
//ios::sync_with_stdio(0);
//cin.tie(0);

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
		
	char mystr[10] = "Sai";
	char yourstr[10] = "DemeSai";
	
	char* cpointer;
	
	//Returning the first occurance of character given in string
	cpointer = strchr(mystr, 'a');
	
	cout << *cpointer <<endl;
	
	//Returning the first occurance of string in a given string
	
	char* spointer;
	
	spointer = strstr(yourstr, mystr);
	
	cout << *spointer << endl;
	cout << spointer <<endl;
	printf("%s\n", spointer);
	//__int128_t s = 10;
	//printf("%lld", sizeof(s));
	
	//getting entire line in string
	string s;
	getline(cin, s);
	cout << s.size() << endl << s << endl;
	
	

}


