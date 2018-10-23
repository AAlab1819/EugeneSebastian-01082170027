#include <iostream>

using namespace std;
int main() {
	int i, n, count = 0,sum=0;
	cin>>n;
	int a[n];
	for ( i = 0 ; i < n ; i++){
		cin>>a[i];
		sum+=a[i];
	}
	for ( i = 0 ; i < n - 1 ; i++ ) {
		if (a[i]==0 && a[i + 1] > 0 ){
			cout<<"NO";
			return 0;
		}
	}
	if (sum%2==1)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}