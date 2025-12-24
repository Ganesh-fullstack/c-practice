#include<stdio.h>
int main(){
int a,b;
printf("Enter first number=");
scanf("%d",&a);
printf("Enter second number=");
scanf("%d",&b);

if(a^b){
printf("%d and %d are different numbers",a,b);
}
else
{
printf("%d and %d are same numbers",a,b);
}
}