////1)REVERSE OF A NUMBER :

//#include<stdio.h>
//int main()
//{
//	int num,temp,sum=0,digit;
//	printf("\nENTER THE VALUE OF N : ");
//	scanf("%d",&num);
//	temp=num;
//	while (num!=0)
//	{
//		digit=num%10;
//		sum=sum*10+digit;
//		num=num/10;
//	}
//	printf("\nTHE REVERSE OF %d IS %d",temp,sum);
//	return 0;
//}


////2)PALLENDROME

//#include<stdio.h>
//int main()
//{
//	int num,temp,sum=0,digit;
//	printf("\nENTER THE VALUE OF N : ");
//	scanf("%d",&num);
//	temp=num;
//	while (num!=0)
//	{
//		digit=num%10;
//		sum=sum*10+digit;
//		num=num/10;
//	}
//	if (sum==temp)
//		printf("\nPALLENDROME");
//	else
//		printf("\nNOT A PALLENDROME");
//	return 0;
//}



////3)CHECK THE NUM IS ARMSTRONG OR NOT:


/*#include<stdio.h>
#include<math.h>

int main()
{
	int num,temp,ctr=0,sum=0,digit;
	printf("\nENTER THE VALUE OF N : ");
	scanf("%d",&num);
	temp=num;
	while (num!=0)
	{
		ctr=ctr+1;
		num=num/10;
	}
	num=temp;
	while (num!=0)
	{
		digit=num%10;
		sum=sum+pow(digit,ctr);
		num=num/10;
	}
	if (sum==temp)
		printf("\nARMSTRONG");
	else
		printf("\nNOT ARMSTRONG");
	return 0;
}*/


//////4)BINARY TO DECIMAL
/*
#include<stdio.h>
#include<math.h>

int main()
{
	int num,temp,i=0,sum=0,digit;
	printf("\nENTER THE VALUE OF N : ");
	scanf("%d",&num);
	temp=num;
	while (num!=0)
	{
		digit=num%10;
		sum=sum+digit*pow(2,i);
		i++;					//or i+=1 or i=i+1//
		num=num/10;
	}
	printf("\nDECIMAL EQ. OF %d IS %d",temp,sum);
	return 0;
}*/


//////CHECK NUMB IS PRIME OR NOT


#include<stdio.h>
#include<math.h>

int main()
{
	int num,i,ctr=0;
	printf("\nENTER ANY NO : ");
	scanf("%d",&num);
	for (i=2;i<num;i++)
////	for (i=2;i<num/2;i++)
//	for (i=2;i<sqrt(num);i++)


	{
		if (num%i==0)
		{
			ctr=ctr+1;
			break;
		}
	}
	if (ctr==0)
		printf("\nPRIME");
	else
		printf("\nNOT-PRIME");
	return 0;
}
