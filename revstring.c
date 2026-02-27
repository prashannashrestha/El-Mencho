#include<stdio.h>
#include<stdlib.h>
void main()
{
char name[100];
printf("Enter the string : ");
scanf("%s",name);
char *p=name,*q=name;
printf("String : %s \n",name);


while(*q!='\0')
{
q++;
}
q--;
char temp;
while(p<q)
{
temp=*p;
*p=*q;
*q=temp;
p++;
q--;
}

printf("Reversed = %s ",name);
}