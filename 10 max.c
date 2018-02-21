#include<stdio.h>
int main()
{
 int a[10],i,n,m;
 printf("\n enter the number");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  printf("\n%d",a[i]);
 }
 a[i]=m;
 for(i=0;i<n;i++)
 {
  if(m<a[i])
  m=a[i];
  }
  printf("\n maximum  number is %d",m);
  return 0;
}
