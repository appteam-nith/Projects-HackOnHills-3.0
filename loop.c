#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter any integer number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	 {for(j=0;j<n;j++)
	  if(i+j>=n-1)
	  printf("*");
	 else printf(" ");
	 
	 for(k=0;k<n-1;k++)
	 if(i>k)
	  printf("*");
	   
	printf("\n");
}
return 0;	   
}
