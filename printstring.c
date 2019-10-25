#include<stdio.h>
int main()
{
  int i,max;
  int A[20];
  
  puts("Enter array contents");
  
  for(i=0;i<20;i++)
   scanf("%d",&A[i]);
  
  max=A[0];
  
  for(i=0;i<20;i++)
    if(A[i]>max)
     max=A[i];
     
  printf("Maximum number=%d",max);

return 0;
}
