import java.util.Scanner;

public class ONW {
	public static void main( String args[] ) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] unsort = new int[n];
		int[] sort = new int[n];
		int count = 0;
		int x = 0;
		//count determines whether the integer is a pair or not
		for ( int i = 0 ; i < n ; i++ ) {
			unsort[i] = scanner.nextInt();
		}
		int min = 2147483647;
		for ( int i = 0 ; i < n ; i++ ) {
			for ( int j = 0 ; j < n ; j++ ) { 
				if( unsort[j] < min ){
					min = unsort[j];
					x = j;
				}
			}
			unsort[x] = 2147483647;
			sort[i] = min;
			min = 2147483647;
		}
			
		int low_count = 0, high_count = 0;
		int low = sort[0];
		int high = sort[n-1];
		for ( int i = 0 ; i < n ; i++ ) {
			if ( sort[i] == low ) {
				low_count++;
			}
			if ( sort[i] == high ) {
				high_count++;
			}
		}
		if (low == high) {
			System.out.print("01");
		}
		else {
			System.out.print(n - high_count - low_count);
		}
}
}

            
