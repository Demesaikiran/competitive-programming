int findOdd(int arr[], int n)
{
    int res = 0;
    for(int i=0; i< n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

// Other variant of this is finding the missing number from the range 1....n+1
// Xor all the numbers to get the missing number

void addAppearing(int arr[], int n)
{
    int xor = 0, res1= 0, res2= 0;

    for(int i=0; i< n; i++) xor ^= arr[i];

    int setBit = xor & ~(xor-1);
    for(int i=0; i< n; i++)
    {
        if((arr[i] & setBit) != 0) res1 ^= arr[i];
        else res2 ^= arr[i];
    }
    print(res1, res2);
}