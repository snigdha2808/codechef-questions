#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if(x<=k)
        {
            int s=0;
            while(n>0)
            {
                if(s==x)
                {
                    s=0;
                }
                cout<<s<<" ";
                s=s+1;
                n--;
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}