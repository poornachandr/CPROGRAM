#include<stdio.h>
int main()
{
 int num,a,sum=0;
 printf("\n Enter the number:");
 scanf("%d",&num);
 while(num!=0)
 {
  a=num%10;
  sum=sum+a;
  num=num/10;
 }
 printf("\n The result is %d",sum);
return 0;
}
