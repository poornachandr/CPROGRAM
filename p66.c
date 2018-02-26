#include<stdio.h>
int main()
{
 int n,i,count=0;
 printf("/n enter the number");
 scanrf("%d",&n);
 for(i=1;1<=n;i++)
 {
  if(n%i==0)
  {
   count++;
  }
  if(count==2)
  {
   printf("/n %d is prime number",n);
  }
  else
  {
   printf("/n %d is not a prime number",n);
  }
 }
 return 0;
} 
