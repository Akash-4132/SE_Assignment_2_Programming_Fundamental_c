#include<stdio.h>

int factorial(int);

main()
{
	int n, f;
	printf("\n\n\n\t Enter n : ");
	scanf("%d",&n);
	f=factorial(n);
	printf("\n\n\t Factorial of the give  number : %d", f);
}

int factorial(int num)
{
	int i, fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
	
}