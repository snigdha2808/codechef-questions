#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,t,sum=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int fd,ld,c=0,copy;
        ld=n%10;
        copy=n;
        while(copy!=0)
        {
            c++;
            copy=copy/10;
        }
        fd=n/(int)pow(10,c-1);
        sum=fd+ld;
         cout<<sum<<endl;
    } 
}