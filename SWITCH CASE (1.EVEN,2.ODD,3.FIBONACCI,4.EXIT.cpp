#include<stdio.h>
int main()
{
	int a,b,c,d,i;
		while(true)
		{
		
		printf("			SERIES MENU");
		printf("\n1.EVEN");
		printf("\n2.ODD");
		printf("\n3.FIBONACCI");
		printf("\n4.EXIT");
		printf("\nENTER CHOICE:");
		fflush(stdin);
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				i=2;
				while(i<=10)
				{
					printf("\n%d",i);
					i=i+2;
				}
				break;
				
			case 2:
				i=1;
				while(i<=10)
				{
					printf("\n%d",i);
					i=i+2;
				}
				break;
			case 3:
				
				b=0;
				c=1;
				i=1;
				while(i<=5)
				
				
				{
					d=b+c;
					printf("\n%d",d);
					b=c;
					c=d;
					i=i+1;
				}
				break;
			case 4:
				return 0;
			default:printf("\nINVALID OPERATION");	
		}
		}
		return 0;		

}
