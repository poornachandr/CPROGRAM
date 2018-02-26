#include<stdio.h>
int main()
{
 int num;
 printf("\n enter a number:");
 scanf("%d",&num);
 while(num%10!=0)
 {
  num++;
  }
  printf("\n the nearest greatest multiple is %d",num);
  return 0;
  }
