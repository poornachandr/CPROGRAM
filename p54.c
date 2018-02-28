#include<stdio.h>
int main()
{
 int num;
 printf("\n enter a number");
 scanf("%d",&num);
 while(num%2!=0)
 {
  num--;
 }
 printf("\n the number is %d",num);
 return 0;
 }
