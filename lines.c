#include<stdio.h>
void main()
{
 int count=0,i;
 char a[30]="love to code.love to dance.";
 for(i=0;a[i]!='\0';i++)
 {
  if((a[i]!='.'))
 {
  count++;
 }
 }
  printf("\n %d",count);
}
