long long sumUnderModulo(long long a,long long b)
{
    // code here
    int M=1000000007;
    long long sum=(a%M+b%M)%(M);
    return sum;
}
//Uses the property of addition modulo:-
//(a+b)%M=(a%M+b%M)%M
