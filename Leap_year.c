#include<stdio.h>
void main()
{
    void leap_year(int year)
    {
        if(year%400==0)
        {
            printf("\%d  leap year",year);
        }
        else if(year%4==0)
        {
             printf("\n%d  leap year",year);
        }
        else if(year%100==0)
        {
             printf("\n%d not a leap year",year);
        }
        else
        {
             printf("\n%d not a leap year",year);
        }
    }
    
    leap_year(2040);
        leap_year(2010);
        leap_year(2030);

    
    
    
    
}