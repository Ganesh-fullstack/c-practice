#include<stdio.h>
void main()
{
    int table;
    printf("Enter a table number");
    scanf("%d",&table);
    for(int i=1;i<=10;i++)
    {
        int t=i*table;
        printf("\n%d * %d = %d",table,i,t);
    }
}