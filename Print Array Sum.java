import java.util.*;
public class Solution {


	public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/
		Scanner sc = new Scanner (System.in);
		int n = sc.nextInt();
		int a [] = new int [n];
		int s = 0;
		for(int i = 0 ; i < n ; i++)
		{
			a[i] = sc.nextInt();
			s+=a[i];
		}
		System.out.println(s);

		
	}

}
