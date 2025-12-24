#include<stdio.h>
int main(){
 int n,digit,temp;
 printf("Enterprises the number=");
 scanf("%d",&n);
 temp=n;
 int a=0;
 while(n!=0){
 digit=n%10;
 a=a*10+digit;
 n=n/10;
 
 }
printf("%d",a); 
}