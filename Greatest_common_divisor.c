#include<stdio.h>

int GCD(int a,int b)
{
   int result;
   if(a<b){
   result=a;
   }
   else{
   result=b;
   }
   while(result>0){
   if(a%result==0 && b%result==0){
   break;
   }
   result--;
   }
   printf("%d",result);
   return 0;
   
   }
   
   void main(){
  
   GCD(98,56);
   }