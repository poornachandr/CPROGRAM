#include<stdio.h>
int main()
{
 int m,n,sum;
 printf("\n enter two numbers for addition");
 scanf("%d%d",&m,&n);
 sum=m+n;
 printf("\n sum is %d",sum);
 if(sum%2==0)
 {
  printf("\n even");
  }
  else
  {
   printf("\n odd");
  } 
  return 0;
  }
