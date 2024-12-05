 /*    
    *
   * *
  * * *
 * * * *
* * * * *
        */
#include<stdio.h>
main(){
	int r=5;
	int i,j; //i for space //j for column
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r - i;j++)
		{
			printf(" ");
			
		}
		for(j=1;j<=i;j++)
		{
		
		printf("* ");
	}
	printf("\n");
	}
	
	
}