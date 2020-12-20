int digitsInFactorial(int N)
{
    // code here
    if(N<0)
    return 0;
    if(N<=1)
    return 1;
    double noOfDigit{0};
    for(int i=2;i<=N;i++)
    noOfDigit+=log10(i);
    return floor(noOfDigit)+1;
}
