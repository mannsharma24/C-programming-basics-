#include<stdio.h>
#include "checki.h"

int i=100;
int main()
{
	printf("\n%d",i);
	i=i+50;
	display();
	printf("\n%d",i);
	return 0;
}
