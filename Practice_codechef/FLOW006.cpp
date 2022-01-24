#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,l;
        int sum=0;
        cin>>n;
        while(n>0)
        {
            l=n%10;
            sum=sum+l;
            n=n/10;
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
