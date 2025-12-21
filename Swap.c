#include<stdio.h>
void main()
{
    int a=10;
    int b=20;
    int temp;
        printf("Before swaping");
    printf("\n%d",a);
    printf("\n%d",b);
    
    
    temp=a;
    a=b;
    b=temp;
    
    printf("\nAfter swaping");
    printf("\n%d",a);
    printf("\n%d",b);
    
}