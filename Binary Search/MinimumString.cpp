//https://binarysearch.com/problems/Minimum-String

int solve(string s, string t) {
    int salpha[26]={0};
    int talpha[26]={0};

    int slen=s.size();

    for(int i=0; i< slen; i++){

        char temp = s[i];
        (salpha[temp-'a'])++;

        temp = t[i];
        (talpha[temp-'a'])++;
    }

    int difference = 0;

    for(int i=0; i<26; i++){
        difference += abs(salpha[i] - talpha[i]);
    }

    return difference/2;
}