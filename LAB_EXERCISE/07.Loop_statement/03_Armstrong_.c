// Q.3  Wap to check Armstrong number using loop
#include<stdio.h>

main(){
	
	int n,rem,orignal,sum=0;
	
	printf("\n\n\t Enter any number for checking Armstrong or not :");
	scanf("%d",&n);
	
	orignal=n;
	

	while(n>0){

	
	rem=n%10;
	sum=sum+(rem*rem*rem);
	n=n/10;
	
   }
	if(sum==orignal)
	printf("number is %d Armostrong",orignal);
	else
	printf("number is %d not Armstrong",orignal);

}
