//Function

bool isPow2(int n)
{
    if(n == 0) return false;
    return(n & (n-1) == 0);
    //One line exp

    return((n!=0) && (n & (n-1) == 0));
}