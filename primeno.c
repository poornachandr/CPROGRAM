#include<stdio.h>
int main()
{
 int num,i,c=0;
 printf("/n enter the number");
 scanrf("%d",&num);
 for(i=1;1<=num;i++)
 {
  if(num%i==0)
  {
   c++;
  }
  if(c==2)
  {
   printf("/n prime number");
  }
  else
  {
   printf("/n not a prime number");
  }
 }
 return 0;
} 
