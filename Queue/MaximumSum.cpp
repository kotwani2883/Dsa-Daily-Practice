/*Author-:Palak*/
/*
 * Only write code when you are sure of the approach .Remember of penalties!!
 * Do optimized thinking (Think which technique/observation can be used,deep drive into the problem!!).
 * Do post analysis after the contest./Upsolving is much more important than giving contest
 * Learn a technique and solve some problems if its new to you--->Solve as many as problems to be confident in those kinds of problem!!
 * DON'T GET STUCK ON ONE APPROACH,Move your mind in all directions
 *Remember who you are and your Capabilities!!
 */
long maximum_sum(int n,vector<int>v,int k)
{
    
   
    
    map<int,int>m1;
    int i;
    long sum=0;
    for(i=0;i<n;i++)
    {
        m1[v[i]]++;
    }
    priority_queue<pair<int,int>>pq;
    
    for(auto i:m1)
    {
        pq.push({i.second,i.first});
    }
    
    int c=0;
    while(c<k)
    {
        pair<int,int>p;
        p=pq.top();
        pq.pop();
        p.first--;
        sum+=p.second;
        if(p.first)
        {
            pq.push(p);
        }
        c++;
    }
    return sum;
}
