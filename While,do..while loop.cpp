/*#include<stdio.h>
int main()
{
	//if (-1) 									//DAD//
	//if ("")									//DAD//
	//if ('')            					    //ERROR//
	//if (' ')								    //DAD//
	if (0)									/////MUMMA//////
		printf("\nDAD");
	else
		printf("\nMUMMA");
	return 0;
}*/

/*-------------------------------------------*WHILE LOOP*-------------------------------------------------------------------------*/

							/*QUES-1)FIRST FIVE EVEN NUMBERS*/

/*#include<stdio.h>
int main()
{
	int i=2 ;
	while (i<=10)
	{
		printf("\n%d",i);
		i+=2;
	}
	return 0;
}*/


							/*QUES-2)PRINT EVEN ACCORDING TO USER REPLY*/
/*#include<stdio.h>
int main()
{
	int i=2;
	char reply='y';
	while (reply == 'y' || reply == 'Y')
	{
		printf("\n%d",i);
		i+=2;
		printf("\nDO YOU WANT MORE EVEN NUMBER Y OR N :");
		fflush(stdin);
		scanf("%c",&reply);
	}
	return 0;

}*/

/*QUES-->SUM OF DIGITS OF A NUMBER :*/

/*include<stdio.h>
int main()
{
	int num,temp,sum=0,digit;
	printf("\nENTER THE VALUE : ");
	scanf("%d",&num);
	temp=num;
	while (num!=0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("\nTHE SUM OF DIGITS OF %d IS %d :",temp,sum);
	return 0;
}*/



////QUES--->COUNT A ODD OR EVEN IN DIGIT Eg:123 Even=1,Odd=2

//#include<stdio.h>
//int main()
//{
//	int num,temp,x_even=0,x_odd=0,digit;
//	printf("\nENTER THE VALUE :");
//	scanf("%d",&num);
//	temp=num;
//	while (num!=0)
//	{
//		digit=num%10;
//		if (digit%2==0)
//			x_even+=1;
//		else
//			x_odd+=1;
//		num=num/10;
//	}
//	printf("\nTHE DIGIT %d HAS EVEN DIGITS %d AND ODD DIGITS IS %d :",temp,x_even,x_odd);
//	return 0;
//}


////QUES--->SQUARE OF ODD NUMBERS AND CUBE OF EVEN NUMBERS DIGIT ALSO, INDIVIDUAL SUM ALSO

//#include<stdio.h>
//int main()
//{
//	int num,temp,sq,cube,sum_even=0,sum_odd=0,digit;
//	printf("\nENTER THE VALUE :");
//	scanf("%d",&num);
//	temp=num;
//	while (num!=0)
//	{
//		digit=num%10;
//		if (digit%2==0)
//		{
//			cube=digit*digit*digit;
//			printf("%d\t",cube);
//			sum_even+=digit;
//		}
//		else
//		{
//			sq=digit*digit;
//			printf("%d\t",sq);
//			sum_odd+=digit;
//		}
//		num=num/10;
//	}
//	printf("\nTHE DIGIT %d HAS EVEN SUM %d \nODD SUM IS %d",temp,sum_even,sum_odd);
//	return 0;
//}


////QUES--->FACTORIAL BY WHILE LOOP

/*#include<stdio.h>
int main()
{
	int fact=1,num;
	scanf("%d",&num);
	while (num>=1)
	{
		fact=fact*num;
		num--;
	}
	printf("%d",fact);
	return 0;
}*/




/*-----------------------------------------------------------DO...WHILE LOOP-------------------------------------------------------*/

/*#include<stdio.h>
int main()
{
	int i=2;
	char reply='y';
	do
	{
		printf("\n%d",i);
		i+=2;
		printf("\nDO YOU WANT MORE EVEN NUMBER Y OR N :");
		fflush(stdin);
		scanf("%c",&reply);
	} while (reply='y'||reply=='Y');
	return 0;
}*/







////QUES

#include<stdio.h>
int main()
{
	int num,odd,even,fibo,exit,choice,i,a=0,b=1,c;
	while (true)
	{
		printf("\n\tSERIES MENU ");
		printf("\n1.ODD");
		printf("\n2.EVEN");
		printf("\n3.FIBONACCI");
		printf("\n4.exit");
		printf("\nEnter any num :");
		scanf("%d",&num);
		printf("\nEnter Your Choice :");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				{
					i=1;
					while (i<=num+1)
					{
						printf("\n%d",i);
						i+=2;
					}
				}
			case 2:
				{
					i=0;
					while (i<=num+1)
					{
						printf("\n%d",i);
						i+=2;
					}
				}break;
			case 3:
				i=1;
				while (i<=num+1)
				{
						c=a+b;
						printf("\t%d",c);
						a=b;
						b=c;
				}break;
			case 4:
				return 0;
			default : printf("\nINVALID OPERATION");

		}
	}
	return 0;
}
