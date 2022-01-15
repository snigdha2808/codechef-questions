#include <iostream>
using namespace std;

int main() {
    double curramt;
    int witamt;
    double bal=0.00;
    cin>>witamt;
    cin>>curramt;
    if(curramt>=(witamt+0.50) && witamt % 5==0)
    {
        bal=curramt-witamt-0.50;
        cout<<bal;
    }
    else
    cout<<curramt;
    return 0;
}