/*1
23
456
78910
1112131415
 */
#include<stdio.h>

main()
{
	int i,j,n=1;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",n);
			n++;
			j++;
		}
		printf("\n");
		i++;
	}
	
}