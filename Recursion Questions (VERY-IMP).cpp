////											Ques-Power of a number by Recursion .

/*
#include<stdio.h>
int power(int ,int );
int main()
{
	int b,e,result;
	printf("\nEnter Base and Exponent : ");
	scanf("%d%d",&b,&e);
	result=power(b,e);
	printf("\nResult is %d",result);
	return 0;
}
int power(int x, int y)
{
	if (y==0)
		return 1;
	else
		return x*power(x,y-1);
		
}*/


////											Ques-Sum of the diigit of a number :~
/*#include<stdio.h>
int sd(int);
int main()
{
	int num,result;
	printf("\nEnter Number : ");
	scanf("%d",&num);
	result=sd(num);
	printf("\nResult is %d",result);
	return 0;
}
int sd(int n)
{
	if (n==0)
		return 0;
	else
		return n%10+sd(n/10);
}*/



////										   Ques-HCF/GCD  :~
/*#include<stdio.h>
void HCF(int ,int );
int main()
{
	int a,b,result;
	printf("\nEnter 1. and 2.  : ");
	scanf("%d%d",&a,&b);
	if (a>b)
		HCF(a,b);
	else
		HCF(b,a);
	return 0;
}
void HCF(int x, int y)
{
	int rem;
	rem=x%y;
	if (rem==0)
	{	printf("\nH.C.F or G.C.D is %d",y);
		return ;
	}
	else
		HCF(y,rem);
}*/

////						Ques-Fibonacci by Recurssion
/*#include<stdio.h>
int fibo(int);
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("%d ",fibo(i));
	}
	return 0;
}
int fibo(int n)
{
	if (n==1)
		return 0;
	else if (n==2)
		return 1;
	else 
		return fibo(n-1)+fibo(n-2);
}*/


////								Ques-Sum of n natural number
/*#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}*/



////							Ques-Sum of a digit till (123--->5) one digit comes

#include<stdio.h>
int sd(int);
int main()
{
	int num,result;
	printf("\nEnter Number : ");
	scanf("%d",&num);
	result=sd(num);
	printf("\nResult is %d",result);
	return 0;
}
int sd(int n)
{
	if (n<10)
		return 0;
	else
		return n%10+sd(n/10);
}
