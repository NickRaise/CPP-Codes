cout<<"Enter the sum:";
    int org_sum;
    cin>>org_sum;
    int sum=0;
    int start,end;
    start=a[0];
    end=a[0];
    while(end<n && sum<=org_sum)
    {
        sum+=a[end];   
        end++;
    }
    while(end<n && sum!=org_sum)
    {
        sum-=a[start];
        start++;
    }
    cout<<"Starting position->"<<start+1<<endl<<"End position->"<<end<<endl;