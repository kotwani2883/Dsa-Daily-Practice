#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int index{0};
      priority_queue<int,vector<int>,greater<int> >pq; //Min heap-We need to extract the minimum element here!!
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]);
            if(pq.size()>k)
            {
                a[index]=pq.top();
                index++;
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            a[index]=pq.top();
            index++;
            pq.pop();
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
