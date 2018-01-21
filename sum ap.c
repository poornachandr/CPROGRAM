#include<stdio.h>
int main()
{
 int n,a,d,num,i,sum=0;
 printf("/n enter the numbers for n,a,d");
 scanf("%d,%d,%d",&n,&a,&d);
 for(i=0;i<=n;i++)
 {
 num=a+(i-1)*d;
 printf("/n the number is %d",num);
 sum=num;
 sum=sum+num;
 printf("/n the sum is %d",sum);
 }
 return 0;
}
