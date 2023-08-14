import java.util.*;
class Solution {
	
	public static void main(String args[]) {
		
		// Write code here
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		if(n<0){
			System.out.println("Error");
		}
		else{
			if(n==0)
			{
				System.out.println("1");
			}
			else{
				int p = 1;
		for(int i = 1 ; i <= n ; i++){
			p = p * i;
		}
		System.out.println(p);	
			}
				}
		
		
	}
}