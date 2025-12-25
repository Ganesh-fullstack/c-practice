#include<stdio.h>
 void main()
 {
 char ch;
 printf("Enter character:");
 scanf("%c",&ch);
 if(ch<='Z' && ch>='A' )
 {
 printf("%c is a Alphabet",ch);
 }
 else if(ch<='9' && ch>='1'){
 printf("%c is a Number",ch);
 }
 else{
 printf("%c is a special symbol",ch);
 } 
 }