int nextGap(int gap)
{
    if(gap<=1)
    return 0;
    return (gap/2)+(gap%2);
}
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i,j,gap=n+m;
	    for( gap=nextGap(gap);gap>0;gap=nextGap(gap))
	    {
	        //compairing elemnts in first array
	        for( i=0;i+gap<n;i++)
	        {
	            if(arr1[i]>arr1[i+gap])
	            swap(arr1[i],arr1[i+gap]);
	        }
	        //compairing elements in both the arrays
	        for( j=gap>n?gap-n:0;i<n&&j<m;i++,j++)
	        {
	            if(arr1[i]>arr2[j])
	            swap(arr1[i],arr2[j]);
	        }
	        if(j<m)
	        {
	            //compairing elements in second array
	            for( j=0;j+gap<m;j++)
	            if(arr2[j]>arr2[j+gap])
	            swap(arr2[j],arr2[j+gap]);
	        }
	    }
	}
};
