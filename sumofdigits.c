#include<stdio.h> 
int sum(int n,int s);
main()
{
int n,s=0;
printf("enter the number\n");
scanf("%d",&n);
printf("the sum = %d",sum(n,s));
}
int sum(int n,int s)
{
int i,j;
j=n%10;
i=n/10;
s=s+j;
if(i!=0)
sum(i,s);
else
return s;	
}
