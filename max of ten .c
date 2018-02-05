#include<stdio.h>
int main()
{
 int a[10],i,num,max;
 printf("\n enter the number");
 scanf("%d",&num);
 for(i=0;i<num;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<num;i++)
 {
  printf("\n%d",a[i]);
 }
 a[i]=max;
 for(i=0;i<num;i++)
 {
  if(max<a[i])
  max=a[i];
  }
  printf("\n maximum  number is %d",max);
  return 0;
}
