#include<stdio.h>
int main(){
 int n;
 printf("Enter a number");
 scanf("%d",&n);
 int temp=n;
 int b=0;
  while(n!=0){
   b=b+(n%10)*(n%10)*(n%10);
   n=n/10;
  }
  
  if(b==temp)
  {
  printf("\n%d is a armstrong number",b);
  }
  else{
  printf("\n%d is not a armstrong number",b);
  }
}