#include<stdio.h>
int main()
{
 char a[50];
 int k,i;
 printf("{\n enter a string");
 scanf("%s",&a);
 printf("\n enter a number");
 scanf("%d",&k);
 for(i=0;i<k;i++)
 {
  printf("%c",a[i]);
 }
 return 0;
} 
