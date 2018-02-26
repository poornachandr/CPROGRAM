#include<stdio.h>
int main()
{
 int num;
 printf("\n enter a number");
 scanf("%d",&num);
 if(num%7==0)
 {
  printf("\n %d is a multiple of 7",num);
 }
 else
 {
  printf("\n no");
 }
 return 0;
 }
