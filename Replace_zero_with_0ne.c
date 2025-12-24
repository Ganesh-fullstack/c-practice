#include<stdio.h>
#include<math.h>

    
  void main()
  {
		int num=10000;
		
		int a=0;
		int k=0;
		
		while(num!=0)
		{
			if(num%10==0)
			{
				a=a+1*pow(10,k);
				}
			else	{
				
				a=a+(num%10)*pow(10,k);
				}
				num=num/10;
				k++;			
			}
            
			printf("%d",a);
}