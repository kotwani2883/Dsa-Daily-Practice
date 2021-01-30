/User function Template for C++

// Function to count set bits in the given number x
// n: input to count the number of set bits
int largestPowerOfTwoInRange(int n)
{
    int x=0;
    while((1<<x)<=n)
    x++;
    return x-1;
    
}

int countSetBits(int n)
{
    // Your logic here
    if(n==0)
    return 0;
   int x=largestPowerOfTwoInRange(n);
   int bitsUpTp2Pow=x*(1<<(x-1));
   int msb=n-(1<<x)+1;
   int rest=n-(1<<x);
   int res=bitsUpTp2Pow+msb+countSetBits(rest);
   return res;
    
}
