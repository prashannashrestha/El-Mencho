#include<stdio.h>
#include<stdlib.h>
void main()
{
int n=5;
printf("DMA memory mapping ");
scanf("%d",&n);
int *p=(int *)malloc(n*sizeof(int));

for(int k=0;k<n;k++) //to scan
scanf("%d",(p+k));


printf("\n");
for(int k=0;k<n;k++)
{
printf("%u -> ",*(p+k));
printf("%p \n",(void *)(p+k));
}

printf("\n");
int *q=(int *)calloc(n,sizeof(int));

for(int k=0;k<n;k++) //to scan calloc
scanf("%d",(q+k));

printf("\n");
for(int k=0;k<n;k++)
{
printf("%u -> ",*(q+k));
printf("%p \n",(void *)(q+k));
}

}