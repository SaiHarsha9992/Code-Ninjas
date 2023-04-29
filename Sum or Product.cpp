#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
	const unsigned int c = 1000000007;     
		if(q==1)    
		{     
			int ans=0;       
			for(int i=1;i<=n;i++)     
			{            
				ans = ans + i;       
			}        
			return ans;   
		}   
		else if(q==2)    
		{        
			long ans=1;        
			for(int i=1;i<=n;i++)      
			{           
				ans = (ans * i) % c;       
			}        
			return ans;   	
		}
}