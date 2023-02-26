#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans , n = arr.size ( );
    sort ( arr . begin ( ) , arr . end ( ) ) ;
	for ( int i = 0 ; i < n ; i++ )
    {
        if ( arr [ i ] == arr [ i + 1 ] ) 
        {
            ans = arr [ i ] ;
        }
    }
    return ans ;
}
