#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        int c=0;
        long long int e=0;
        cin>>n>>d;
        if(d<=10)
        {
            c=pow(2,d);
            if(c<=n)
            {
                cout<<c<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
        }
        else if(d>10 && d<=20)
        {
            e=1024*(pow(3,(d-10)));
            if(e<=n)
            {
                cout<<e<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
            cout<<n<<endl;
        }
        
    }
	// your code goes here
	return 0;
}