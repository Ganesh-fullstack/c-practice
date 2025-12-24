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
 if(a==temp){
 printf("the given number %d is palandrome",temp);
 }
 else{
 printf("the given number %d is not a palandrome",temp);
 }
 }