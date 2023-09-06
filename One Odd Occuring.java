public class Solution{
    public static int missingNumber(int n, int []arr){
        // Write your code here.
        int a = arr[0];
        for(int i = 1 ; i < n ; i++){
            a = a ^ arr[i];
        }
        return a;
    }
}