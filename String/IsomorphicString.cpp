/*Author-:Palak*/

#include<bits/stdc++.h>
bool areIsomorphic(string str1, string str2)
{
    
    // Your code here
    if(str1.length()!=str2.length())
    return false;
    else
    {
   map<char,int>mp1;
   map<char,int>mp2;
   for(int i=0;i<str1.length();i++)
   {
       if(mp1[str1[i]]!=mp2[str2[i]])
       return false;
       mp1[str1[i]]=i+1;
       mp2[str2[i]]=i+1;
   }
   return true;
    }
}
