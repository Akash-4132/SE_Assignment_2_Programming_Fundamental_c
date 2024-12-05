/*A
  B B
  C C C 
  D D D D
  E E E E E*/
#include<stdio.h>

main(){
	
	int r,c;
	char ch='A';
	
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r){
			
			printf(" %c",ch);
			c++;
		
		}
		printf("\n");
		r++;
			ch++;
	}
}