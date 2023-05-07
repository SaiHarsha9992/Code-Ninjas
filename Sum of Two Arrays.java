
import java.util.* ;

import java.io.*; 

public class Solution {

    public static int[] findArraySum(int[] a, int n, int[] b, int m) {

        // Write your code here.

        int n1=0 , n2=0;

        for(int i=0;i<n;i++)
        {
            n1+=a[i]*(Math.pow(10, n-i-1));
        }
        for(int i=0;i<m;i++)
        {
            n2+=b[i]*(Math.pow(10, m-i-1));
        }
        int n3=n1+n2;
        int t=n3,d=0;
        while(t>0)
        {
            int r=t%10;
            d++;
            t/=10;
        }
        int []c=new int[d];
        while(n3>0)
        {
            for(int i=d-1;i>=0;i--)
            {
                c[i]=n3%10;
                n3/=10;
            }
        }
        return c;
    }

}
