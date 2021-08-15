//https://binarysearch.com/problems/Common-Words


int solve(string s0, string s1) {

	set<string> hashtable;
	map<string, int> comp;
	string temp;
	stringstream X(s0);

    // use while loop to check the getline() function condition  
	while(getline(X, temp, ' '))
	{
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        /* X represents to read the string from stringstream, temp use for store the token string and, 
         ' ' whitespace represents to split the string where whitespace is found. */  
		hashtable.insert(temp);
	}

	stringstream Y(s1);
    //To compare the second string with the hashtable set.
	while(getline(Y, temp, ' '))
	{
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
		if(hashtable.count(temp)) comp[temp]++;
    }

    return comp.size();
    
}

/*     Python code        */
class Solution:
    def solve(self, s0, s1):

        s01 = set(s0.lower().split())
        s11 = set(s1.lower().split())
        return len(s01 & s11)
