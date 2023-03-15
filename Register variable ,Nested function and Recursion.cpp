/*#include<stdio.h>
int main()
{
	int i;
	for (i=1;i<=10;i+=2)
	{
		printf("%d ",i);
	}
	return 0;
}*/


//										Ques-Avg of 2 numbers by Nesting :
//#include<stdio.h>
//int sum (int , int);
//float average(int,int);
//int main() 
//{
//	int a,b;
//	float avg;
//	scanf("%d%d",&a,&b);
//	avg = average(a,b);
//	printf("\nAverage is %.2f",avg);
//	return 0;
//}
//int sum(int x,int y)
//{
//	int z;
//	z=x+y;
//	return z;
//}
//
//float average(int p,int q)
//{
//	int s;
//	float av;
//	s=sum(p,q);
//	av=(float)s/2;
//	return av;
//}





////                                                                              II-nd way
/*#include<stdio.h>
void sum(int,int);
void average(int);
int main()
{
	int a,b;
	printf("\nENTER 2 NUMBERS :");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
}
void sum (int x,int y)
{
	int z;
	z=x+y;
	printf("\nSUM IS %d",z);
	average(z);
}
void average(int s)
{
	float av;
	av = (float)s/2;
	printf("\nAverage is %f",av);
}*/

////				Ques-Factorial of a number by recursion method ;
/*#include<stdio.h>
int fact(int);
int main()
{
	int num,result;
	printf("\nEnter any no :");
	scanf("%d",&num);
	result=fact(num);
	printf("\n%d",result);
	return 0;
}
int fact(int n)
{
	if (n>1)
		return n*fact(n-1);
	else
		return 1;
}*/

//////												II-nd Way
/*#include<stdio.h>
int fact(int);
int main()
{
	int num,result;
	printf("\nEnter any no :");
	scanf("%d",&num);
	result=fact(num);
	printf("\n%d",result);
	return 0;
}
int fact(int n)
{
	int i,fac=1;
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}*/
