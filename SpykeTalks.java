import java.util.Scanner;

public class SpykeTalks {
	public static void main( String args[] ) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] id = new int[n];
		int count = 0;
		int zeroes = 0;
		//count determines whether the integer is a pair or not
		int pairs = 0;
		//pairs is the output
		for ( int i = 0 ; i < n ; i++) {
			id[i] = scanner.nextInt();
		}
		for ( int i = 0 ; i < n ; i++ ) {
			count = 0;
			for ( int j = 0 ; j < n ; j++ ) {
				if (id[i] == id[j] && i != j && id[i] != 0){
					count++;
				}
				if (id[j] == 0 ){
				zeroes++;
			}
			}
			if (zeroes == n ) {
				System.out.println("0");
				break;
			}
			if (count >= 2){
				System.out.println("-1");
				break;
			}
			else {
				if ( count == 1 ) {
					pairs++;	
				}
			}
			zeroes = 0;
		}
		if ( count < 2 && zeroes != n ) {
			System.out.println(pairs/2);
			//divided by 2 as the pairs get counted twice
		}
	}
}