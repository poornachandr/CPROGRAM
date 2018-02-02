#include<stdio.h>
void main()
{
 int a[10],i,n,s;
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
 s=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]<s)
  s=a[i];
  }
  printf("\n smallest numjber is %d",s);
 }
  
