/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty())
   return -1;
   return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
  if(s.empty())
  return -1;

      int temp=s.top();
      s.pop();
      if(temp>=minEle)
        return temp;
      else 
      {//Working as flag
      int x=minEle;
      minEle=2*minEle-temp;
      return x;
       }

}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
  if(s.size()==0)
  {
      s.push(x);
      minEle=x;
  }
  else
  {
      if(x>=minEle)
      s.push(x);
      else 
      {
          s.push(2*x-minEle);
          minEle=x;
      }
  }
}

