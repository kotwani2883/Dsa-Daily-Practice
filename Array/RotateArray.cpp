//Rotate the Array
//Juggling Algorithm--Imp
//Does the rotation in O(n) time and O(1) space 
/*Suppose we are given an array of n integers and we have to rotate it by k positions to the left with space complexity of O(1)
 i.e. within the same array (in-place)
 If we will shift elements one by one it will become hard to keep tack of all elements without using additional space.
 So we will divide the array into sets/cycles where the number of sets will depend on the value of n and k.
 Number of sets = gcd( n, k ) where gcd is greatest common divisor of n & k.
 And we will shift every element in a set k places to the left by using the formula

A[j] = A[ ( j + k ) % n]
So there will be two nested loops where the outer loop will run for the number of sets and the inner loop with shift elements of a set k positions to the left.
Let outer loop be from i=0 to i < gcd(n,k) i.e for the number of sets.
Inside the inner loop we will shift the elements k positions to the left for each set i.e starting for i=0.

We will take a variable j for the inner loop and make j = i
We will copy the value of first element of the set in a temporary varivale "temp"
Then we will calculate d = (j + k) % n
And make A[j] = A[d]
Then we will move j to the index of the shifted element by making j = d
And we will repeat the steps 2 to 5 until j == i, i.e. when j == i we will break out of the inner loop.
After the inner loop ends we will copy the value in temp at index j i.e A[j] = temp

And we will repeat the steps for every set.

Suppose we are given this array of 9 elements i.e n=9 and we have to rotate it by 3 positions i.e. k=3.
Reference:https://www.codewhoop.com/array/rotation-in-place.html*/
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
    
}
void rotateArr(int arr[], int d, int n){
  int k=-1,i,temp,j;
  for(int i=0;i<gcd(n,d);i++)
  {
      j=i;
      temp=arr[i];
      while(1)
      {
          k=(j+d)%n;
          if(k==i)
          break;
          arr[j]=arr[k];
          j=k;
      }
      arr[j]=temp;
  }
}
