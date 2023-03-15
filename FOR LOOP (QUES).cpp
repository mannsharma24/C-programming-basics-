/*QUES-1)-5,10,15,20,25*/
/*#include<stdio.h>
int main()
{
	int n,i;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=5;i<=n;i+=5)
	{
		printf("%d ",i);
	}
	return 0;
}*/



/*QUES-2)-500,400,300,200,100*/
/*#include<stdio.h>
int main()
{
	int n,i;
	for (i=500;i>=100;i-=100)
	{
		printf("%d ",i);
	}
	return 0;
}*/



/*QUES-3)-SUM OF FIRST N NATURAL NUMBER-----------------------------------------------------*/
/*#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nSUM OF FIRST %d NATURAL NO IS %d",n,sum);
	return 0;
}*/



/*QUES-4)SQUARE/CUBE AND SUM OF N NATURAL NUMBER*------------------------------------------*/
/*#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i*i;
//		sum=sum+i*i*i
	}
	printf("\nSUM OF SQUARE %d NATURAL NO IS %d",n,sum);
	return 0;
}*/ 


/*QUES-5)FACTORIAL OF A NUMBER-----------------------------------------------------------*/
/*#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("\nFACTORIAL OF %d IS %d ",n,fact);
	return 0;
}*/



/*QUES-6)-TABLE OF A NUMBER--------------------------------------------------------*/
/*#include<stdio.h>
int main()
{
	int n,i,prod=1;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		prod=n*i;
		printf("\n %d * %d = %d",n,i,prod);
	}
	return 0;
}*/



/*#include<stdio.h>
int main()
{
	int n,i,prod=1;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
	return 0;
}*/


/*QUES-7)FIBONACCI SERIES------------------------------------------*/
/*#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\n%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}*/



/*QUES-8)-SUM OF FACTORS OF A NUMBER----------------------------------*/
/*#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
			sum=sum+i;
	}
	printf("\nSUM OF FACTORS OF %d IS %d",n,sum);
	return 0;
}*/



/*QUES-9)-SUM AND AVERAGE*/
/*#include<stdio.h>
int main()
{
	float n,i,values,sum=0,avg;
	printf("\nENTER TOTAL NUMBER TO GET SUM (e.g-10010) :");
	scanf("%f",&n);
	printf("\nENTER %.0f VALUES :",n);
	for (i=1;i<=n;i++)
	{
		scanf("%f",&values);
		sum=sum+values;
	}
	printf("\nSUM OF ABOVE NUMBERS ARE : %.0f",sum);
	avg=sum/n;
	printf("\nAVERAGE OF GIVEN NUMBERS ARE : %.3f",avg);
	return 0;
}*/




/*QUES-10)-CHECK NUM IS PERFECT NUMBER OR NOT*/
/*#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	for (i=1;i<=(n-1);i++)
	{
		if (n%i==0)
			sum=sum+i;
	}
	if (sum==n)
		printf("\nPERFECT-NUMBER");
	else
		printf("\nNOT A PERFECT NUMBER");
	return 0;
}*/
 


/*QUES-11)COUNT ODD EVEN*/
#include<stdio.h>
int main()
{
	int n,i,values,x_even=0,x_odd=0;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&n);
	printf("\nGIVE THE %d VALUES ",n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&values);
		if (values%2==0)
			x_even+=1;
		else
			x_odd+=1;
	}
	printf("\nTOTAL EVEN NUMBERS ARE : %d",x_even);
	printf("\nTOTAL ODD NUMBERS ARE  : %d",x_odd);
	return 0;
}
