#include <stdio.h>

int main(int argc, char *argv[] ){
	int N, i, c,j,k,temp;
	scanf("%d",&N);
	int arr[N];
	double adder[N][N];
	for (i = 0 ; i < N ; i++ ) {
		scanf("%d",&arr[i]);
	}
	c = 0;
	for (i = 0 ; i < N ; i++) {
		for ( j = 0 ; j < 1 + c; j++ ){
			adder[i][j]=arr[j];
		}
		c++;
	}
	c = 1;
	for ( i = 1 ; i < N ; i++ ) {
		for ( j = 0 ; j < 1 + c ; j++ ) {
			for ( k = 0 ; k < 1 + c ; k++) {
				if( adder[i][j] < adder[i][k] ){
					temp = adder[i][j];
					adder[i][j] = adder[i][k];
					adder[i][k] = temp;
				}
			}
		}
		c++;    
	}
	c = 0;
	for ( i = 0 ; i < N ; i++ ) {
			if ( (1 + c) % 2 == 1 ) {
				printf("%.1f\n",adder[i][((2 + c ) / 2)-1]);
			} else {
				printf("%.1f\n",(adder[i][((1 + c ) / 2)-1] + 
					adder[i][((1 + c ) / 2 )])/2);
			}
			c++;
	}
}