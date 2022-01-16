#include <iostream>
using namespace std;

int main() {  
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        int d,e,f;
        cin>>a>>b>>c;
        cin>>d>>e>>f;
        int sum=0;
        int sum1=0;
        sum=a+b+c;
        sum1=d+e+f;
        if(sum>sum1)
        {
            cout<<"Dragon"<<endl;
        }
        else if(sum==sum1)
        {
            if(a>d)
            {
                cout<<"Dragon"<<endl;
            }
            else if(a==d)
            {
                if(b>e)
                {
                    cout<<"Dragon"<<endl;
                }
                else if(b<e)
                {
                    cout<<"Sloth"<<endl;
                }
                else
                {
                    cout<<"Tie"<<endl;
                }
            }
        }
        else
        {
            cout<<"Sloth"<<endl;
        }
    }
	// your code goes here
	return 0;
}
