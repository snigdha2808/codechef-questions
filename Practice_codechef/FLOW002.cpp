#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--)
    {
		int a, b;
		scanf("%d %d", &a, &b);
		int ans=a%b;
		cout<<ans<<endl;
    }
	return 0;
}