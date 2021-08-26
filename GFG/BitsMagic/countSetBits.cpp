//Naive solution
//Function

int countSet(int n)
{
    int res = 0;
    //way-1
    while(n > 0)
    {
        if(n % 2 != 0) res++;   // res += (n & 1); replacing if...
        n/=2;
    }
    //way-2
    while(n>0){
        if(n&1 == 1) res++;
        n >>= 1;
    }
    //way-3
    while(n > 0)
    {

    }
}

Time complexity: Theta(total bits in n)


//Brian kerningams algo

int countBits(int n)
{
    int res = 0;
    while(n > 0)
    {
        n &= n-1;
        res ++;
    }

    return res;
}

Time complexity: Theta(set bit count)

// Method-3 
// Lookup table method for 32 bits numbers
//Precomputation

int table[256];

void initialize()
{
    table[0] = 0;
    for(int i=1; i< 256; i++)
        table[i] = (i & 1) + table[i/2];
}

int countBits(int n)
{
    int res = table[n & 0xff];
    n >>= 8;

    res += table[n & 0xff];
    n >>= 8;

    res += table[n & 0xff];
    n >>= 8;

    res += table[n & 0xff];
    return res;
}

Time coplexity: Theta(1);