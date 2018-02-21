#include<stdio.h>
int main()
{
 int a[10],i,num,large;
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
 a[i]=large;
 for(i=0;i<num;i++)
 {
  if(large<a[i])
  large=a[i];
  }
  printf("\n maximum  number is %d",large);
  return 0;
}
