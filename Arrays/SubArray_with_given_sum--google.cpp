#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elemnts: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }


    cout<<"Enter the sum:";
    int org_sum;
    cin>>org_sum;
    int sum=0;
    int start,end;
    start=a[0];
    end=a[0];
    while(end<n && sum+a[end]<=org_sum)
    {
        sum+=a[end];
        end++;
    }
    if(sum==org_sum)
        {
            cout<<start+1<<" "<<end;
            return 0;
        }
    while(end<n)
    {
        sum +=a[end];
        while(sum>org_sum)
        {
            sum -= a[start];
            start++;
        }
        if(sum==org_sum)
        {
            cout<<start+1<<" "<<end+1;
            break;
        }
        end++;
    }

    











    // my solution (probabily wrong)
    // cout<<"Enter the sum:";
    // int org_sum;
    // cin>>org_sum;
    // int sum=0;
    // int start,end;
    // start=a[0];
    // end=a[0];
    // while(end<n && sum<=org_sum)
    // {
    //     sum+=a[end];   
    //     end++;
    // }
    // while(end<n && sum!=org_sum)
    // {
    //     sum-=a[start];
    //     start++;
    // }
    // cout<<"Starting position->"<<start+1<<endl<<"End position->"<<end<<endl;
    return 0;
}