/*#include<stdio.h>
#include<math.h>
int main()
{
	int base,expo,result;
	printf("\nENTER THE VALUE OF BASE AND EXPONENT :");
	scanf("%d%d",&base,&expo);
	result=pow(base,expo);
	printf("\nTHE RESULT IS : %d",result);
	return 0;
}*/


/*-----------------------------------------------------------------------------------------------------------------------*/

/*QUES-										SUM OF 2 NUMBERS															*/
/*#include<stdio.h>
int sum(int ,int );
int main()
{
	int a,b,c;
	printf("\nENTER 2 NUMBERS :");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nSUM IS : %d",c);
	return 0;
}

int sum(int x ,int y )
{
	int z;
	z=x+y;
	return z;
}*/

/*-----------------------------------------------------------------------------------------------------------------------*/

/*QUES- 									Area of circle           */
/*#include<stdio.h>
float area_circle(float);
int main()
{
	float r,area;
	printf("\nENTER THE VALUE OF RADIUS :");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("\nAREA OF CIRCLE IS : %.2f",area);
	return 0;
}

float area_circle(float x)
{
	float ar,r;
	ar=3.14*r*r;
	return ar;
}*/

/*------------------------------------------------------------------------------------------------------------------------*/
/*QUES-   					               Area of Rectangle		*/
/*
#include<stdio.h>
int area_rectangle(int ,int );
int main()
{
	int l,b,area;
	printf("\nENTER THE VALUE OF LEN. AND BRE. :");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("\nAREA OF RECTANGLE IS : %d",area);
	return 0;
}

int area_rectangle(int x)
{
	int ar,a,b;
	ar=a*b;
	return ar;
}
*/

/*-------------------------------------------------------------------------------------------------------------------------------*/

/*QUES-*/

/*#include<stdio.h>
void sum(int ,int );
int main()
{	
	int a,b;
	printf("\nENTER 2 NO :");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("\nTHE SUM IS %d",z);
}*/


//--------------------------------------------------------------------------------------------------------------------------

//#include<stdio.h>
//int sum();
//int main()
//{
//	int c;
//	c=sum();
//	printf("\nSUM IS %d",c);
//	return 0;
//}
//int sum()
//{
//	int x,y,z;
//	printf("\nENTER 2 NO :");
//	scanf("%d%d",&x,&y);
//	z=x+y;
//	return z;
//}

/*#include<stdio.h>
void sum();
int main()
{
	sum()
	return 0;
}
void sum()
{
	int x,y,z;
	z=x+y;
	printf("\nTHE SUM IS %d",z);
}*/

/*-----------------------------------------------------------------------------------------------------------------------------*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*-----------------------------------------------------------------------------------------------------------------------------*/
////QUES-1) MAXIMUM OUT OF 2 NUMBERS ::

//#include<stdio.h>
//int max(int ,int );
//int main()
//{
//	int a,b,c;
//	printf("\n ENTER 2 NUMBER :");
//	scanf("%d%d",&a,&b);
//	c=max(a,b);
//	printf("\nTHE GREATEST VALUE IS %d",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	
////	if (x>y)
////		return x;          //only 1 return value executed after checking condition and cursor (value stored) goes to uppper c)
////	else 
////		return y;
//
//////	int z;
//////	if(x>y)
//////		z=x;
//////	else
//////		z=y;
//////	return z;
//
////////	int z;
////////	z=(x>y)?x:y;
////////	return z;
//}

/*------------------------------------------------------------------------------------------------------------------------------------*/
/*QUES-1 MAX OUT OF 3 */
/*#include<stdio.h>
void max(int ,int ,int );
int main()
{
	int a,b,c;
	printf("\nENTER ANY VALUE OF A B C : ");
	scanf("%d%d%d",&a,&b,&c);
	max(a,b,c);	
	return 0;
}
void max(int x,int y,int z)
{
	int maxx;
	maxx=(x>y&&x>z)?x:(y>z)?y:z; 
	printf("\nMaximum is %d",maxx);
}*/

/*------------------------------------------------------------------------------------------------------------------------*/
/*QUES-2 FACTORIAL BY USING FUNCT. */
/*#include<stdio.h>
int fact(int );
int main()
{
	int num,result;
	printf("\nENTER ANY NUMBER :");
	scanf("%d",&num);
	result=fact(num);
	printf("\n%d FACTORIAL IS %d",num,result);
	return 0;
}
int fact(int n)
{
	int fact=1,i;
	for (i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}*/

/*----------------------------------------------------------------------------------------------------------*/

/*QUES-3 Nod */
/*#include<stdio.h>
int nod(int ,int );
int main()
{
	int year,month,n_o_d;
	printf("\nENTER THE YEAR AND MONTH :");
	scanf("%d%d",&year,&month);
	n_o_d=nod(year,month);
	printf("\nYear %d has %d days",year,month);
	return 0;
}
int nod(int y,int m)
{
	int n_o_d;
	if (m==4||m==6||m==9||m==11)
	{
		n_o_d=30;
		return n_o_d; 
	}
	else if(m==2)
	{
		if (y%4==0)
		{
			n_o_d=29;
			return n_o_d;
		}
		else 
		{
			n_o_d=28;
			return n_o_d;
		}
	}
	else 
	{
		n_o_d=31;
		return n_o_d;
	}
	return 0;
}*/

/*--------------------------------------------------------------------------------------------------------------------------*/

/*QUES-5)LEAP YEAR*/

/*#include<stdio.h>
void isleap(int);
int main()
{
	int year;
	printf("\nENTER THE YEAR :");
	scanf("%d",&year);
	isleap(year);
	return 0;
}
void  isleap(int x)
{
	if (x%4==0)
		printf("\nLeap-Year");
	else
		printf("\nNot-Leap Year");
}*/

/*---------------------------------------------------------*/

/*QUES-6)PRIME*/
/*#include<stdio.h>
void prime(int);
int main()
{
	int num;
	printf("\nENTER THE NUMB :");
	scanf("%d",&num);
	prime(num);
	return 0;
}
void  prime(int x)
{
	int i,ctr=0;
	for (i=2;i<x;i++)
	{
		if (x%i==0)
			ctr++;
	}
	if (ctr==0)
		printf("\nPRIME");
	else
		printf("\nNOT-PRIME");
}*/

/*------------------------------------------------------------------------------------------------*/

/*QUES-7)ARMSTRONG*/
/*#include<stdio.h>
#include<math.h>
void arms(int);
int main()
{
	int num;
	printf("\nENTER THE NUMB :");
	scanf("%d",&num);
	arms(num);
	return 0;
}
void  arms(int x)
{
	int digit,temp,sum=0,ctr=0;
	temp=x;
	while (x!=0)
	{
		x=x/10;
		ctr++;
	}
	x=temp;
	while (x!=0)
	{
		digit=x%10;
		sum=sum+pow(digit,ctr);
		x=x/10;
	}
	if (sum==temp)
		printf("\nARMSTRONG");
	else
		printf("\nNOT-ARMSTRONG");
}*/


/*------------------------------------------------------------------------------------------------------------------*/

/*QUES-8)TABLE */
/*
#include<stdio.h>
void table(int);
int main()
{
	int num;
	printf("\nENTER THE NUMB :");
	scanf("%d",&num);
	table(num);
	return 0;
}
void  table(int x)
{
	int i,prod=1;
	for (i=1;i<11;i++)
	{
		prod=x*i;
		printf("\n%d X %d = %d",x,i,prod);
	}
}*/

/*----------------------------------------------------------------------------------------------------------------*/

//QUES-9)VOID PALLENDROME 
/*#include<stdio.h>
#include<math.h>
void pallendrome(int);
int main()
{
	int num;
	printf("\nENTER THE NUMB :");
	scanf("%d",&num);
	pallendrome(num);
	return 0;
}
void  pallendrome(int x)
{
	int digit,temp,sum=0,ctr=0;
	temp=x;
	while (x!=0)
	{
		digit=x%10;
		sum=sum*10+digit;
		x=x/10;
	}
	if (sum==temp)
		printf("\nPALLENDROME");
	else
		printf("\nNOT-PALLENDROME");
}*/


/*-----------------------------------------------------------------------------------------*/

////QUES-10) REVERSE
#include<stdio.h>
#include<math.h>
void pallendrome(int);
int main()
{
	int num;
	printf("\nENTER THE NUMB :");
	scanf("%d",&num);
	pallendrome(num);
	return 0;
}
void  pallendrome(int x)
{
	int digit,temp,sum=0,ctr=0;
	temp=x;
	while (x!=0)
	{
		digit=x%10;
		sum=sum*10+digit;
		x=x/10;
	}
	printf("\nTHE REVERSE OF %d IS %d ",temp,sum);
}
