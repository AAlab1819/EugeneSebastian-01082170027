#include <stdio.h>

int main(int argc, char *argv[]) {
	int x,y,n;
	scanf("%d",&n);
	scanf("%d",&x);
	int count = 0;
	int a[x];
	for (int i = 0 ; i < x ; i ++ ){
		scanf("%d",&a[i]);
	}
	scanf("%d",&y);
	int b[y];
	int c[n+1];
	for (int i = 0 ; i < y ; i++ ) {
		scanf("%d",&b[i]);
	}
	for (int i = 0 ; i < n+1 ; i++ ) {
		c[i]=0;
	}
	
	for ( int j = 0 ; j < n+1 ; j++ ) {
		for (int i = 0 ; i < x ; i++){	
			if (a[i] == j)
				c[j] = 1;
		}
		for (int i = 0 ; i < y ; i++) {
			if (b[i] == j)
				c[j] = 1;
		}
	}
	for (int i = 1 ; i < n+1 ; i++ ){
		if ( c[i] == 0 ){
			printf("Oh, my keyboard!");
			return 0;
		}
	}
	printf("I become the guy.");
	return 0;
}
