#include <iostream>
using namespace std;

int main(){
	int n,i, sum=0;
	cin>>n;
	int a[n];
	for (i = 0 ; i < n ; i++ ){
		cin>>a[i];
	}
	for ( i = 0 ; i < n ; i++ ) {
		if (a[i] < 0){
			sum -= a[i];
		}
		else {
			sum += a[i];
		}
	}
	cout<<sum;
}