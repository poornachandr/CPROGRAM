#include<stdio.h>
int main()
{
 int num,i,avg;
 printf("\n enter the number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  printf("%d\n",i);
 }
 for(i=1;i<=num;i++)
 {
  avg=(i+i)/num;
 }
 printf("\n the average of %d is %d",num,avg);
 return 0;
} 
