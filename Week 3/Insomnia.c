#include <stdio.h>

int main(int argc, char *argv[]) {
	int k, l ,m, n , d;
	scanf("%d", &k);
	scanf("%d", &l);
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &d);
	int arr[d+1];
	for (int i = 0 ; i<=d ; i++) 
		arr[i]=0;
	int count=0;
	if ( k!=0){
		for (int i = k ; i <= d ; i+=k){
			arr[i]=1;
		}
	}
	if ( l!=0){
		for (int i = l ; i <= d ; i+=l) {
			arr[i]=1;
		}
	}
	if ( m!=0){
		for ( int i = m ; i <= d; i+=m) {
			arr[i]=1;
		}
	}
	if ( n!=0) {
		for (int i = n ; i <= d ; i+=n){
			arr[i]=1;
		}
	}
	for ( int i = 0; i <= d ; i++ ) {
		if (arr[i]==1)
			count++;
	}
	printf("%d",count);
}