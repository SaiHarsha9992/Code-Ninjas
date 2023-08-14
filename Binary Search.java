public class Solution {
    public static int search(int []nums, int target) {
        // Write your code here.
        int a = 0 , g = 0 ;
        boolean flag = false;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i]==target){
                g = i;
                flag = true;
            }
        }
        if(flag == true){
            a = g;
        }
        else{
            a = -1;
        }
        return a;
    }
}