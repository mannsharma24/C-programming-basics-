#include<stdio.h>
void sum(int,int);
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
}
