#include<stdio.h>
int main(){
int n1,n2;
printf("Enter two number=");
scanf("%d%d",&n1,&n2);
printf("\nBefore swaping a=%d and b=%d",n1,n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("\nAfter swaping a=%d and b=%d",n1,n2);
}