							/*MAXIMUM OUT OF 3 NUMBER BY NESTED IF*/

//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("\nENTER 3 NUMBERS A,B,C :");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a>b)
//	{
//		if (a>c)
//			printf("\nA IS GREATER");
//		else
//			printf("\nC IS GREATER");
//	}
//	
//	else
//	{
//		if (b>c)
//			printf("\nB IS GREATER");
//		else
//			printf("\nC IS GREATER");
//	}
//	return 0;
//}


							/*MAXIMUM OUT OF 4 NUMBERS BY NESTED IF*/
//#include<stdio.h>
//int main()
//{
//	int a,b,c,d;
//	printf("\nENTER 4 NUMBERS A,B,C,D :");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	if (a>b)
//	{
//		if (a>c)
//		{
//			if (a>d)
//				printf("\nA IS GREATER");
//			else
//				printf("\nD IS GREATER");
//		}
//		else
//		{
//			if (c>d)
//				printf("\nC IS GREATER");
//			else
//				printf("\nD IS GREATER");
//		}
//	}
//	
//	else
//	{
//		if (b>c)
//		{
//			if (b>d)
//				printf("\nB IS GREATER");
//			else
//				printf("\nD IS GREATER");
//		}
//		else
//		{
//			if (c>d)
//				printf("\nC IS GREATER");
//			else
//				printf("\nD IS GREATER");
//		}
//	}
//	return 0;
//}


			/*INPUT ANY MONTH & YEAR & FIND THE NUM OF DAYS IN GIVEN MONTHS*/
//#include<stdio.h>
//int main()
//{
//	int month,year;
//	printf("\nENTER THE MONTH (1-12) AND YEAR :");
//	scanf("%d %d",&month,&year);
//	if (month==4 || month==6 || month==9 || month==11)
//		printf("\nYEAR HAS NUMBER OF DAYS IS 30");
//	else if (month==2)
//		{
//			if (year%4==0)
//			{
//				printf("\nTHE %d HAS 29 NUMBER OF DAYS",year);
//				printf("\nALSO A LEAP YEAR");
//			}
//			else
//			{
//				printf("\nTHE %d HAS 28 NUMBER OF DAYS",year);
//				printf("\nNOT A LEAP YEAR");
//			}
//		}
//	else
//		printf("\nYEAR HAS NUMBER OF DAYS IS 31");
//	return 0;
//}




					/*AN INSURENCE COMP. INSURES IT DRIVERS ON THE BASIS OF FOLLOWING
		---1)IF DRIVER IS MARRIED
		---2)IF DRIVER IS UN-MARRIED,MALE & AGE>25
		---3)IF DRIVER IS UN-MARRIED,FEMALE & AGE>35
		INPUT MARITIAL STATUS(M OR U),GENDER(M OR F),AGE.FIND CHECK WHETHER A DRIVER IS ENSURED OR NOT*/

/*#include<stdio.h>
int main()
{
	int age;
	char m_status,gender;
	printf("\nENTER YOUR AGE :");
	scanf("%d",&age);
	printf("\nENTER YOUR MARITIAL STATUS (M OR U) :");
	fflush(stdin);
	scanf("%c",&m_status);
	printf("\nENTER YOUR GENDER (M OR F) :");
	fflush(stdin);
	scanf("%c",&age);
	
	if (m_status=='m' || m_status=='M')
		printf("\nTHE DRIVER CAN INSURED");
	else if (m_status=='u' ||m_status=='U')
		{
			if ((gender=='M' || gender=='m') && (age>25))
				printf("\nDRIVER CAN BE INSURED");
			else if ((gender=='F' || gender=='f') && (age>35))
				printf("\nDRIVER CAN NOT BE INSURED");
		}
	else
		printf("\nSORRY YOU ARE NOT ELIGIABLE");
	return 0;
}*/


										/*["----SWITCH CASE----"]*/

///////////////////BY IF ELSE
//#include<stdio.h>
//int main()
//{
//	char choice;
//	printf("\t\tCOLOUR MENU");
//	printf("\nR FOR RED");
//	printf("\nG FOR GREEN");
//	printf("\nB FOR BLUE");
//	printf("\nENTER YOUR CHOICE :");
//	scanf("%c",&choice);
//	if (choice=='R' || choice=='r')
//		printf("\nROSES ARE RED");
//	else if (choice=='G' || choice=='g')
//		printf("\nTREES ARE GREEN");
//	else if (choice=='B' || choice=='b')
//		printf("\nSKY IS BLUE");
//	else
//		printf("\nINVALID CHOICE");
//	return 0;
//}


////////////////BY SWITCH CASE
/*#include<stdio.h>
int main()
{
	char choice;
	printf("\t\tCOLOUR MENU");
	printf("\nR FOR RED");
	printf("\nG FOR GREEN");
	printf("\nB FOR BLUE");
	printf("\nENTER YOUR CHOICE :");
	scanf("%c",&choice);
	switch (choice)
	{
		case 'R':
		case 'r':printf("\nROSES ARE RED");
				break;
		
		case 'G':
		case 'g':printf("\nTREES ARE GREEN");
				break;
	
		case 'B':
		case 'b':printf("\nSKY IS BLUE");
				break;
		default:
				printf("\n!!!INVALID OPERATION!!!");	
	} 
	return 0;
}*/




											//MATH MENU//
/*#include<stdio.h>
int main()
{
	int a,b,c,choice;
	printf("\nENTER 2 NUMBERS :");
	scanf("%d %d",&a,&b);
	printf("\nMATH MENU");
	printf("\n1. ADD");
	printf("\n2. SUBTRACT");
	printf("\nENTER YOUR CHOICE :");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
				c=a+b;
				printf("\nTHE SUM IS %d",c);
				break;
		case 2:
				c=a-b;
				printf("\nTHE DIFFERENCE IS %d",c);
				break;
		default:
				printf("\n!!!INVALID OPERATION!!!");	
	} 
	return 0;
}*/



///////////////AREA MENU//////////////

/*#include<stdio.h>
int main()
{
	float l,b,radius,ar_rect,ar_circle;
	int choice;
	printf("\nMATH MENU");
	printf("\n1. AREA OF RECTANGLE");
	printf("\n2. AREA OF CIRCLE");
	printf("\nENTER YOUR CHOICE :");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
				printf("\nENTER LENGTH & BREADTH :");
				scanf("%f%f",&l,&b);
				ar_rect=l*b;
				printf("\nAREA OF RECTANGLE IS %.2f",ar_rect);
				break;
		case 2:
				printf("\nENTER RADIUS :");
				scanf("%f",&radius);
				ar_circle=2*3.14*radius;
				printf("\nAREA OF CIRCLE IS %.2f",ar_circle);
				break;
		default:
				printf("\n!!!INVALID OPERATION!!!");	
	} 
	return 0;
}*/


/////////CALCULATOR//////////
/*#include<stdio.h>
int main()
{
	int a,b,c;
	char choice;
	printf("\nENTER 2 NUMBERS :");
	scanf("%d%d",&a,&b);
	printf("\tCALCULATOR");
	printf("\n+ Add");
	printf("\n- Subtract");
	printf("\n* Multiply");
	printf("\n/ Divide");	
	printf("\nEnter Your Choice :");
	fflush(stdin);
	scanf("%c",&choice);
	switch (choice)
	{
		case '+':
				c=a+b;
				printf("\nSUM OF %d AND %d IS %d",a,b,c);
				break;
		case '-':
				c=a-b;
				printf("\nDIFFERENCE OF %d AND %d IS %d",a,b,c);
				break;
		case '*':
				c=a*b;
				printf("\nPRODUCT OF %d AND %d IS %d",a,b,c);
				break;
		case '/':
				c=a/b;
				printf("\nSUM OF %d AND %d IS %d",a,b,c);
				break;
		default :
				printf("\n!!!INVALID OPERATION!!!");		
	}
	return 0;
}*/



////CHECK VOWEL OR CONSONANT////
//int main()
//{
//	char alpha ;
//	printf("\nENTER ANY ALPHABET :");
//	scanf("%c",&alpha);
//	
//	switch (alpha)
//	{
//		case 'a':
//		case 'e':
//		case 'i':
//		case 'o':
//		case 'u':printf("\nVOWEL");
//				break;
//		default :printf("\n Consonent");
//	}
//	return 0;
//}


/////////////////////////////////////////BY MAM////////////////////////////////////////
/*#include<stdio.h>
int main()
{
	char mstatus,gender;
	int age;
	printf("\nEnter marital status m or u:");
	fflush(stdin);
	scanf("%c",&mstatus);
	
	if(mstatus=='m')
		printf("\n Can be insured");
	else
	{
		printf("\nEnter gender m or f:");
		fflush(stdin);
		scanf("%c",&gender);
		printf("\nEnter age:");
		scanf("%d",&age);
	
	
			if(gender=='m')
			{
				if (age>25)
					printf("\n Can be insured");
				else
					printf("\n Cannot be insured");
			}
			else
			{
				if (age>35)
					printf("\n Can be insured");
				else
					printf("\n Cannot be insured");
				
			}
	}
	return 0;
}*/




/*#include<stdio.h>
int main()
{
	char mstatus,gender;
	int age;
	printf("\nEnter marital status m or u:");
	fflush(stdin);
	scanf("%c",&mstatus);
	printf("\nEnter gender m or f:");
	fflush(stdin);
	scanf("%c",&gender);
	printf("\nEnter age:");
	scanf("%d",&age);
	
	if(mstatus=='m')
		printf("\n Can be insured");
	else if(mstatus=='u' && gender=='m' && age>25)
		printf("\n Can be insured");
	else if(mstatus=='u' && gender=='f' && age>35)
		printf("\n Can be insured");
	else
		printf("\n Can not be insured");
	
	return 0;
}*/
#include<stdio.h>
int main()
{
	char ch;
	printf("\nENTER ANY ALPHABET :");
	scanf("%c",&ch);
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			printf("\nVOWEL");
		else
			printf("\nCONSONANT");
	}
	else
		printf("\nYOU HAVE NOT ENTERED AN ALPHABET");
	return 0;
}



