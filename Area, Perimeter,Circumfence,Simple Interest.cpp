#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nENTER FIRST NUMBER:");
	scanf("%d",&a);
	printf("\nENTER SECOND NUMBER:");
	scanf("%d",&b);
	c=a+b;
	printf("\nTHE SUM OF %d and %d is %d",a,b,c);
	return 0;
}



#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nENTER LENGTH:");
	scanf("%d",&a);
	printf("\nENTER BREADTH:");
	scanf("%d",&b);
	c=a*b;
	printf("\nTHE AREA OF RECTANGLE IS %d",c);
	return 0;
}


#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER RADIUS:");
	scanf("%d",&a);
	b=3.14*a*a;
	printf("THE AREA OF CIRCLE IS %d",b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER RADIUS:");
	scanf("%d",&a);
	b=2*3.14*a;
	printf("THE CIRCUMFENCE OF CIRCLE IS %d",b);
	return 0;
}



#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER LENGTH:");
	scanf("%d",&a);
	printf("ENTER BREADTH:");
	scanf("%d",&b);
	c=2*(a+b);
	printf("THE PERIMETER OF RECTANGLE IS %d",c);
	return 0;
}



#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("ENTER PRINCIPAL:");
	scanf("%d",&a);
	printf("ENTER RATE:");
	scanf("%d",&b);
	printf("ENTER TIME PERIOD:");
	scanf("%d",&c);
	d=(a*b*c)/100;
	printf("THE SIMPLE INTEREST IS %d",d);
	return 0;
}




