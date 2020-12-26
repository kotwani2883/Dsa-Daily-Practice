int evaluatePostfix(string &str)
{
    // Your code here
    stack<int>s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='+'&&str[i]!='*'&&str[i]!='-'&&str[i]!='/')
          s.push(str[i]-'0');
          else
          {
              int op1=s.top();
              s.pop();
              int op2=s.top();
              s.pop();
              int op3{0};
              if(str[i]=='+')
              op3=op1+op2;
              else if(str[i]=='-')
              op3=op2-op1;
              else if(str[i]=='*')
              op3=op1*op2;
              else if(str[i]=='/')
              op3=op2/op1;
              s.push(op3);
          }
    }
    return s.top();
}

