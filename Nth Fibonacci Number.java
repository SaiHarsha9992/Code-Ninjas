import java.util.*;
public class Solution {


	public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/
		Scanner sc = new Scanner (System.in);
		int n = sc.nextInt();
		int a = 0 , b = 1 ;
		int c = a+b , h = 0;
		for(int i = 1 ; i < n ; i++){
			c = a+b;
			a = b ;
			b = c;
		}
		System.out.println(b);
		
	}

}
