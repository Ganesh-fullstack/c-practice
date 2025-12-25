#include<stdio.h>
# define pi 3.142
int main()
{

int a;
printf("Enter a number=");
scanf("%d",&a);
if(a>0)
{
printf("The number %d is positive",a);
}
else if(a<0){
printf("The number %d is negative",a);
}
else{
printf("The number %d is zero",a);
}
}