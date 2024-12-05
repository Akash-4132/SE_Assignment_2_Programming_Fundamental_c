// Q.1  Wap for find factorial number using recursion
#include<stdio.h>

int factorial(int);

main()
{
	int n, f;
	
	printf("\n\n\t Input a number for factorial : ");
	scanf("%d",&n);
	
	f=factorial(n); //5
	
	printf("\n\n\t Factorial : %d", f);
}

int factorial(int n) //3
{
	if(n==0)
		return 1;
		
	else
		return n*(factorial(n-1)); 
}