#include <stdio.h>

int main( int argc, char *argv[])
{
	int s, n;
	scanf("%d %d", &s, &n);
	int x[n], y[n];
	//x[n] is array for the dragon's power 
	//y[n] is the reward for respective dragon's kill
	int a, b;
	int temp, temp2;
	for (int i = 0 ; i < n ; i++ ){
		scanf("%d %d", &x[i], &y[i]);
	}
	//Sorts array in ascending order 
	//with respect to x[n] and moves y[n] along with it
	for (int i = 0 ; i < n ; i++ ) {
		for (int j = 0 ; j < n ; j++) {
			if ( x[i] < x[j] ) {
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
				temp2 = y[i];
				y[i] = y[j];
				y[j] = temp2;
			}
	}
	}
	//Since the array x[n] is sorted, computer will take easiest path 
	//slaying dragons from lowest power to highest and check if possible
	for (int i = 0; i < n ; i++ ) {
		if ( s <= x[i] ) {
			printf("NO");
			break;
		}
		else {
			s += y[i];
			if ( i == n-1 ) { 
				printf("YES");
			}
		}
	}
}