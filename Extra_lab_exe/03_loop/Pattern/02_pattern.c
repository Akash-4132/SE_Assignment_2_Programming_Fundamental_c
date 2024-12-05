	/* A
	   B C
	   D E F
	   G H I J
	   K L M N O
	   */

#include<stdio.h>
main()
{
	
	int r, c;
   char ch='A';
	r=1;
	while(r<=5)
	{
		c=1;
		
		while(c<=r)
		{
			printf(" %c",ch); 
			
			c++;
				ch++;
		}
		
		printf("\n");
		r++;
	
	}
	
	
	
}