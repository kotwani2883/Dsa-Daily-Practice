bool prime(int N)
{
    if(N<=1)
    return false;
    for(int i=2;i*i<=N;i++)
    {
        if(N%i==0)
        return false;
        
    }
    return true;
}
int exactly3Divisors(int N)
{
    //Your code here
    int count{0};
    for(int i=0;i*i<=N;i++)
    {
        if(prime(i))
        count++;
        
    }
    return count;
}
