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




	//Dealing with cstrings(string constants) and strings:

	string s = "Test string";
	char* cstr = "Test string";

	if( s.length() == strlen(cstr))
	{
		cout << "s and cstr have the same length";

		if( memcmp(cstr, s.data(), s.length()) == 0)
			cout << "str and cstr have the same content";
	}

	// End of dealing with cstrings nad strings
	


	//Tokenising the string

	string sttok("This is an example for tokens");

	char * cstr = new char[sttok.length() + 1];

	strcpy(cstr, sttok.c_str());

	char *p = strtok(cstr, " ");   // strtok(const char , delimeter);
	while(p != 0)
	{
		cout << p << endl;
		p = strtok(NULL, " ");
	}

	delete[] cstr; // deleting the string constant cstr from the memory

	// End of tokenising string

	
}


