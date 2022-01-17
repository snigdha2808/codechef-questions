#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool flag=false;
        bool flag1=false;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s.substr(i,2)=="11")
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"yes"<<endl;
            continue;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s.substr(i,2)=="10")
                {
                    flag1=true;
                    break;
                     }
            }
            if(flag1)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}