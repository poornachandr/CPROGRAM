#include<stdio.h>
int main()
{
 int num,r1,r2;
 printf("\n enter a number");
 scanf("%d",&num);
 printf("\n enter the ranges");
 scanf("%d%d",&r1,&r2);
 if((num>r1)&&(num<r2))
 {
  printf("\n yes");
  }
  else
  {
  printf("\n no");
  }
  return 0;
  }
