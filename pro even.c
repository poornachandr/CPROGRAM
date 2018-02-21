#include<stdio.h>
int main()
{
 int num1,num2,num;
 printf("\n enter two numbers:");
 scanf("%d%d",&num1,&num2);
 num=num1*num2;
 while(num!=0)
 {
  if(num%2==0)
  {
   printf("\n %d is even",num);
  }
  else
   {
    printf("%d is odd",num);
    }
  }
  return 0;
 } 
