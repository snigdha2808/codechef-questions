#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        int d1=p-a;
        int d2=q-b;
        int d3=r-c;
        int tot=(p+q+r)/2;
        int max1=max(d1,d2);
        int max2=max(max1,d3);
        if(max2==d1)
        {
            int s=p+b+c;
            if(s>tot)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(max2==d2)
        {
            int s=a+q+c;
            if(s>tot)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            int s=a+b+r;
            if(s>tot)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
}