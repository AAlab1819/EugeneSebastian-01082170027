#include <iostream>

using namespace std;

int main(){
	int n,i,count=0,red=0;
	cin>>n;
	char x[n];
	cin>>x;
	for (i = 0 ; i < n ; i++){
		if (x[i]=='x'){
			count++;
		}
		else{
			count = 0;
		}
		if (count >= 3 ) {
			red++;
		}
	}
	cout<<red;
}