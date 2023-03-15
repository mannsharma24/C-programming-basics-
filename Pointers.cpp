/*#include<stdio.h>
int main()
{
	int i=10;
	printf("%d :--> %d %u %x %p",i,&i,&i,&i,&i);
	return 0;
}*/


////Ques-
/*#include<stdio.h>
int main()
{
	int i=10;
	int* x=&i;
	
	char c='a';
	char* y=&c;
	printf("%d %d\n",sizeof(i),sizeof(x));
	printf("%d %d\n",sizeof(c),sizeof(y));
	return 0;
}*/

////Ques-
/*#include<stdio.h>
int main()
{
	int i=10;
	int* iptr=&i;
	printf("\nValue of i     : %d",i);
	printf("\nAddress of i   : %d",&i);
	printf("\nValue of iptr  : %d",iptr);
	printf("\nAddress of iptr: %d",&iptr);
	printf("\nValue at iptr  : %d",*iptr);
	return 0;
}*/

/////Ques-
/*
#include<stdio.h>
int main()
{
	int i=10,j=20;
	int *ptr;
	ptr=&i;
	printf("\n%d",*ptr);
	ptr=&j;
	printf("\n%d",*ptr);
	return 0;
}*/


////Ques-Call By value or pass by value
//#include<stdio.h>
//void swap(int,int);
//int main()
//{
//	int a,b;
//	printf("\nEnter 2 no : ");
//	scanf("%d%d",&a,&b);
//	printf("\na & b before swap : %d and %d",a,b);
//	swap(a,b);
//	printf("\na & b after swap  : %d and %d",a,b);
//	return 0;
//}
//void swap(int x,int y)
//{
//	int temp;
//	temp=x;
//	x=y;
//	y=temp;
//}

//////Ques-Call by Reference or Address
//#include<stdio.h>
//void swap(int*,int*);
//int main()
//{
//	int a,b;
//	printf("\nEnter 2 no : ");
//	scanf("%d%d",&a,&b);
//	printf("\na & b before swap : %d and %d",a,b);
//	swap(&a,&b);
//	printf("\na & b after swap  : %d and %d",a,b);
//	return 0;
//}
//void swap(int *x,int *y)
//{
//	int temp;
//	temp=*x;
//	*x=*y;
//	*y=temp;
//}
