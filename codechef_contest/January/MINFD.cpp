#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,x;
        cin>>n>>x;
        int c=0;
        int arr[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum>=x)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            cout<<i+1<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}