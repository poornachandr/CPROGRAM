#include<stdio.h>
int main()
{
 char a[10];
 int i,n=0;
 printf("\n enter the string");
 scanf("%s",&a[i]);
 for(i=0;i<'\0';i++)
 {
  if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
  {
   n=1;
  }
 }
 if(n==1)
 {
   printf("\n the string is numeric");
 }
 else
 {
   printf("\n the string is not numeric");
 }
 return 0;
}
