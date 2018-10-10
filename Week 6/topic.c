#include <stdio.h>

int main( int argc, char *argv[]){
	int N, i, j, score, temp, temp2,temp3;
	scanf("%d",&N);
	int arr[N][7], change[N][3];
	for ( i = 0 ; i < N ; i++ ) {
		for ( j = 0 ; j < 6 ; j++ ) {
			scanf("%d",&arr[i][j]);
			change[i][0] = arr[i][0];
		}
	}
	for ( i = 0 ; i < N ; i++ ){
		score = 0;
		for ( j = 0 ; j < 6 ; j++) {
			if ( j == 2 ){
				score += arr[i][j] * 50;
			} else if ( j == 3){
				score += arr[i][j] * 5;
			} else if ( j == 4 ) {
				score += arr[i][j] * 10;
			} else if ( j == 5 ) {
				score += arr[i][j] * 20;
			}
		}
		arr[i][6] = score;
		change[i][2] = score;
	}
	for ( i = 0 ; i < N ; i++ ) {
		change[i][1] = arr[i][6] - arr[i][1];
	}
	for ( i = 0 ; i < N ; i++ ) {
		for ( j = 0 ; j < N ; j++ ) {
			if (change[i][1] > change[j][1]){
				temp = change[i][1];
				temp2 = change[i][0];
				temp3 = change[i][2];
				
				change[i][1] = change[j][1];
				change[j][1] = temp;
				
				change[i][0] = change[j][0];
				change[j][0] = temp2;
				
				change[i][2] = change[j][2];
				change[j][2] = temp3;
			}
		}
	}
	for ( i = 0 ; i < 5 ; i++ ){
		printf("%d %d\n",change[i][0],change[i][2]);
	}

}