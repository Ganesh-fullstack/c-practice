#include<stdio.h>
void main()
{
int a=1;
int b=11011,c=0;
while(b!=0)
{
  c=c+(b%10)*a;
  b=b/10;
  a=a*2; 
 
}
printf("%d",c);
}