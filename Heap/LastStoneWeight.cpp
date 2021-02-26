class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //We ll be imlementing max heap here!!
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++)
            pq.push(stones[i]);
        while(pq.size()>1)
        {
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(a!=b)
                pq.push(a-b);
        }
        int res{0};
        if(pq.size()>0)
         res=pq.top();
        else
          res=0  ;
        return res;
    }
    
};
