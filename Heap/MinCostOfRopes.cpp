#include <bits/stdc++.h>
using namespace std;

// Position this line where user code will be pasted.
long long minCost(long long arr[], long long n);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << minCost(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


long long minCost(long long arr[], long long n) {
    // Your code here
    priority_queue<long long ,vector<long long>,greater<long long> >pq;//Min heap
   
    for(long long i=0;i<n;i++)
        pq.push(arr[i]);
        long long cost{0};
        while(pq.size()!=1)
        {
            long long x=pq.top();
             pq.pop();
             long long y=pq.top();
             pq.pop();
             cost+=(x+y);
             pq.push(x+y);

        }
    return cost;
}

