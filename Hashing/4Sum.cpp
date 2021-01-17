vector<vector<int> > fourSum(vector<int> &arr, int k) {
    // Your code goes here
    vector<vector<int> >res;
    if(arr.empty())
    {
        vector<int>quadruplet;
        quadruplet.push_back(0);
        res.push_back(quadruplet);
        return res;
    }
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int target_2=k-arr[j]-arr[i];
            int front=j+1;//Immediate element 
            int back=n-1;//Last elememt of the array
            while(front<back)
            {
                int two_sum=arr[front]+arr[back];
                if(two_sum<target_2)
                front++;
                else if(two_sum>target_2)
                back--;
                else //two_sum=target_2 //Answer found!!
                {
                    vector<int>quadruplet(4,0);
                    quadruplet[0]=arr[i];
                    quadruplet[1]=arr[j];
                    quadruplet[2]=arr[front];
                    quadruplet[3]=arr[back];
                    res.push_back(quadruplet);
                    
                    //Handling the duplicates of front /Third number in the quad
                    while(front<back && arr[front]==quadruplet[2])
                    front++;
                    
                    //Handling the duplicates of the Back /Fourth int the quad
                    while(front<back&& arr[back]==quadruplet[3])
                    back--;
                    
                    
                }
            }
            //handling the duplicates of 2nd element
            while(j+1<n && arr[j+1]==arr[j])
            j++;
        }
        //handling the duplicates of the 1st element 
        while(i+1<n && arr[i+1]==arr[i])
        i++;
    }
    return res;
}

