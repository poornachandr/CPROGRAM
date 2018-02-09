#include<stdio.h>
int main()
{
 int a,num,count=0;
 printf("\n enter a number");
 scanf("%d",&num);
 while(num!=0)
 {
  num/=10;
  count++;
 }
 printf("\n the no of digits is %d",count);
 return 0;
 }
 
