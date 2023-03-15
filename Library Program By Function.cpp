#include<stdio.h>
#include<mylib.h>
////#include "mylib.h"
int main()
{
	int choice;
	printf("\nSeries Menu \n1.Odd \n2.Even \nEnter Your Choice : ");
	scanf("%d",&choice);
	if (choice==1)
		odd();
	else if (choice==2)
		even();
	else
		printf("\nInvalid Operation");
		
}
