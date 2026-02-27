#include<stdio.h>
#include<stdlib.h>
void main()
{
int n;
printf("Enter the number of elements : ");
scanf("%d",&n);
int *p=(int *)malloc(n*sizeof(int));

for(int k=0;k<n;k++)
 scanf("%d",(p+k));

printf("\n");
for(int k=0;k<n;k++)
 printf("%d ",*(p+k));
}