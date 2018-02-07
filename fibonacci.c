#include<stdio.h>
void main()
{
 int num,t=0,s=1,next,i=0;
 printf("\n enter the number:");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 {
  printf("%d\n",t);
  next=t+s;
  t=s;
  s=next;
  }
 } 
  
  
