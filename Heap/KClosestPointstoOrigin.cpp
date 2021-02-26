class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int,pair<int,int>>>p; //max-heap;
      for(int i=0;i<points.size();i++)
      {
          p.push(make_pair(points[i][0]*points[i][0]+points[i][1]*points[i][1],make_pair(points[i][0],points[i][1])));
          if(p.size()>K)
              p.pop();
      }
        vector<vector<int>>ans;
        while(!p.empty()){
        vector<int>v;
            int a=p.top().second.first;
            int b=p.top().second.second;
            p.pop();
            v.push_back(a);
            v.push_back(b);
            ans.push_back(v);
        }
        return ans;
        
    }
};
