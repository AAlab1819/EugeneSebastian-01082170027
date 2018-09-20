#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, l, count = 0; 
	double c;
	int temp;
	double diff=0;
	scanf("%d", &n);
	scanf("%d", &l);
	int arr[n];
	
	for (int i = 0 ; i < n ; i++) 
		scanf("%d", &arr[i]);
	for (int i = 0 ; i < n ; i++ ){
		for (int j = 0 ; j < n ; j++ ){
			if (arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n-1 ; i++){
		if ( (arr[i+1] - arr[i]) >diff){
			diff = arr[i+1] - arr[i];
		}
	}
	c = diff/2;
	if (arr[0] > c)
		c = arr[0];
	if (l-arr[n-1] > c){
		c = l-arr[n-1];
	}
	printf("%f", c);
}