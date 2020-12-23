//Power of 2
//Method-1  O(1)
bool isPowerofTwo(long long n){
    
    // Your code here  
    if(ceil(log2(n))==floor(log2(n)))
    return true;
    else
    return false;
    
}
//Method-2  O(log n)
//bool isPowerofTwo(long long n){
    
    // Your code here  
    if(n==0)
    return 0;
    while(n!=1)
    {
        if(n%2!=0)
        return 0;
        else
        {
            n=n/2;
        }
       
    }
    return 1;
}
//M-3 O(1)
bool isPowerofTwo(long long n){
    
    // Your code here  
    if(n==0)
    return 0;
    return (!(n&(n-1)));
}
