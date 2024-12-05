//Sorting the Array Acs to dsc

#include<stdio.h>
main()
{
	int arr[50], i,  j, size, temp;
	
	printf("\n\n\t Enter the size of array  : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Enter Arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n\n\t Before Sorting ---------------");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Arr[%d] : %d",i, arr[i]);
	
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\n\n\n\t After Sorting ---------------");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Arr[%d] : %d",i, arr[i]);
	
	}
	
	
}