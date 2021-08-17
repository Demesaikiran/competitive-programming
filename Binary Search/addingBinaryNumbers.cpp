string solve(string a, string b) {
    string res = "";

    int sum = 0;
    int as = a.size()-1, bs = b.size()-1;

    while(as >= 0 || bs >= 0 || sum == 1)
    {
        sum += ((as >= 0) ? a[as] - '0' : 0);
        sum += ((bs >= 0) ? b[bs] - '0' : 0);

        res = char(sum % 2 + '0') + res;
        sum /= 2;
        as--; bs--;
    }
    return res;
}