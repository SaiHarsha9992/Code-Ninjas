#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int n = m + 1 , a = arr . size ( ) - 1 ;
	while ( n <= a )
	{
		swap ( arr [ n ] , arr [ a ] ) ;
		n++ ;
		a-- ;
	}
}
