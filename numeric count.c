#include<stdio.h>
void main()
{
 int count=0,i;
 char a[30]="love to code .123.";
 for(i=0;a[i]!='\0';i++)
 {
  if((a[i]>='0')&&(a[i]<='9'))
 {
  count++;
 }
 }
  printf("\n %d",count);
}
