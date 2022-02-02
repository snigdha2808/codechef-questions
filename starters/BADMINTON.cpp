#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            int s=(n+2)/2;
            cout<<s<<endl;
        }
        else{
            int s=(n+1)/2;
            cout<<s<<endl;
        }
    }
}