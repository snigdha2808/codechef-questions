#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--)
    {
        double t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        double c=0.0;
        double d=0.0;
        c=(t1*t1)/(r1*r1*r1);
        d=(t2*t2)/(r2*r2*r2);
        if(c==d)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	// your code goes here
	return 0;
}
