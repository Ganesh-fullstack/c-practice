#include<stdio.h>
int main()
{
int j,start,end,count=0;
printf("Enter start number=");
scanf("%d",&start);
printf("Enter end number=");
scanf("%d",&end);
int i;
for(i=start;i<=end;i++)
{
    count=0;
    if(i>1)
    {
      for(j=1;j<=i;j++){
         if(i%j==0){
            count++;
             }
             }
             
    if(count==2){
    printf("\n%d ",i);
    
    }
  
 }
 
 
 
}
}