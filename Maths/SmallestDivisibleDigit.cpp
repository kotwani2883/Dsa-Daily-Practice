class Solution{
public:
long long gcd(long a, long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
    long long getSmallestDivNum(long long n){
        // code here
        //LCM=Product/gcd of nos
         long long ans = 1; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (long long i = 1; i <=n; i++) 
        ans = (((i * ans)) / 
                (gcd(i, ans))); 
  
    return ans; 
    }
};
