#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[10][10];
        for(int r=0;r<3;r++)
        {
            for(int c=0;c<3;c++)
            {
                cin>>arr[r][c];
            }
        }
        int s=0,s1=0;
        s=arr[2][1]+arr[1][0]+arr[2][0];
        s1=arr[0][1]+arr[0][2]+arr[1][2];
        if(arr[0][0]==n && arr[1][1]==n && arr[2][2])
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<max(s,s1)<<endl;
        }
    }
}