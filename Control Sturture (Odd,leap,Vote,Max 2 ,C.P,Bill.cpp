													/*WAP to check num is even or odd*/
/*#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter the number to check odd even :");
	scanf("%d",&a);
	(a%2==0)?printf("Even"):printf("Odd");
	return 0;
}*/


													/*WAP to check num is even or odd*/
/*#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter the number to check odd even :");
	scanf("%d",&a);
	if (a%2==0)
		printf("Even");
	else
		printf("Odd");
	return 0;
}*/




													/*WAP to check num is +ve or -ve*/
/*#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter the number to check Positive or negative :");
	scanf("%d",&a);
	if (a>0 || a==0)
		printf("+ve num");
	else
		printf("-ve num");
	return 0;
}*/






													/*WAP to check num is Leap or not */
/*#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year :");
	scanf("%d",&year);
	if (year%4==0)
		{
			printf("\nLeap Year");
		}
	else
		printf("\nNot-Leap Year");
	return 0;
}*/

											/*CENTUARY YEAR (CORRECT WAY TO CHECK A YEAR IS LEAP OR NOT A LEAP*/
#include<stdio.h>
int main()
{
	int year;
	printf("\nENTER ANY YEAR :");
	scanf("%d",&year);
	if ((year%100==0 && year%400==0) || (year%100!=0 && year%4==0))
	{
		printf("\nLEAP-YEAR");
		printf("\nFEB WILL HAVE 29 DAYS");
		printf("\nYEAR WILL HAVE 366 DAYS");
	}
	else
	{
		printf("\nNOT A LEAP-YEAR");
		printf("\nFEB WILL HAVE 28 DAYS");
		printf("\nYEAR WILL HAVE 365 DAYS");
	}
	return 0;
}

														/*WAP TO CHECK A PERSON CAN CASTE VOTE OR NOT*/
/*#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter the age :");
	scanf("%d",&age);
	if (age>=18)
		printf("\nCan Caste Vote");
	else
		printf("\nCan-not Caste");
	return 0;
}*/






																/*MAX OUT OF 2 NUMBERS*/
/*#include<stdio.h>
int main()
{
	int a,b,max;
	printf("\nEnter the value of a and b :");
	scanf("%d %d",&a,&b);
	if (a>b)
		printf("\nA is maximum");
	else
		printf("\nB is maximum");
	return 0;
}*/													




										/*WAP TO CAL BONUS(0.10*BASIC AND 0.05*BASIC)*/
/*#include<stdio.h>
int main()
{
	float basic_salary,bonus,total;
	printf("\nEnter the values of Basic-Salary  :");
	scanf("%f",&basic_salary);
	if (basic_salary>10000)
		{
			bonus=0.10*basic_salary;
			printf("\nBonus is %f",bonus);
		}
	else
		{
			bonus=0.05*basic_salary;
			printf("\nBonus is %f",bonus);
		}
	total=basic_salary+bonus;
	printf("\nTotal is %f",total);
	return 0;
}*/






								/*WAP TO TAKE INPUT OF C.P AND S.P.CAL PROFIT AND LOSS;*/
/*#include<stdio.h>
int main()
{
	float COST_PRICE,SELLING_PRICE,profit,loss;
	printf("\nEnter the values of COST_PRICE,SELLING_PRICE  :");
	scanf("%f%f",&COST_PRICE,&SELLING_PRICE);
	if (SELLING_PRICE>COST_PRICE)
		{
			printf("\n!!!!!!!!!!PROFIT!!!!!!!!!!");
			profit=SELLING_PRICE-COST_PRICE;
			printf("\nPROFIT OF %f",profit);
		}
	else
		{
			printf("\n!!!!!!!!!!LOSS!!!!!!!!!!");
			loss=COST_PRICE-SELLING_PRICE;
			printf("\nLOSS OF %f",loss);
		}
	return 0;
}*/





								/*WAP TO TAKE INPUT P.R,N.R & M-TYPE (D AND C).CAL UNIT CONSUMED & BILL*/
/*#include<stdio.h>
int main()
{
	float P_R,N_R,unit_cons,bill,R_P_U;
	char m_type;
	printf("\nEnter the Previous Reading :");
	scanf("%f",&P_R);
	printf("\nEnter the New Reading :");
	scanf("%f",&N_R);
	printf("\nEnter the m-type (D or C)");
	scanf("%s",&m_type);
	fflush(stdin);
	if (m_type=='D' || m_type=='d')
		R_P_U=4.50;
	else
		R_P_U=5.50;
	unit_cons=N_R-P_R;
	bill=unit_cons*R_P_U;
	printf("\nUnit Consumed is %.2f",unit_cons);
	printf("\nBill is %.2f",bill);
	return 0;
}*/







												/*WAP TO WISH GOOD MORNING MAM & SIR*/
/*#include<stdio.h>
int main()
{
	char gender;
	printf("\nEnter Your Gender (M or F)");
	scanf("%c",&gender);
	if (gender == 'm'|| gender == 'M')
		printf("\n!!!!GOOD MORNING SIR!!!!");
	else
		printf("\n!!!!GOOD MORNING MAM!!!!");
	return 0;
}*/


