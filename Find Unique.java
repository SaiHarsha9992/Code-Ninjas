int findUnique(int *arr, int size)
{
    //Write your code here
    int flag = 0 ;
    for (int i = 0; i < size; i++) 
    {
        flag = 1;
        for ( int j = 0 ; j < size ; j++ )
        {
            if ( arr [ i ] == arr [ j ] && i !=j )
            {
                flag = 0;
                break;                
            }
        }
        if(flag == 1)
        {
            return arr[i];
        }
    }
    return -1;
}