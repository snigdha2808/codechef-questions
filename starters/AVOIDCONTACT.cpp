#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            int s=2*y-1;
            cout<<s<<endl;
        }
        else if(x>y)
        {
            int s=2*y+(x-y);
            cout<<s<<endl;
        }
    }
}