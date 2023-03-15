												/*MAX OUT OF 2 NUMBERS*/
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("\nENTER THE VALUE OF A & B :");
	scanf("%d%d",&a,&b);
	if (a>b)
		printf("\nA IS GREATER");
	else if (a<b)
		printf("\nB IS GREATER");
	else
		printf("\nBOTH ARE EQUAL");
	return 0;
		
}*/

												/*+VE,-VE,0*/			
/*#include<stdio.h>
int main()
{
	float a;
	printf("\nENTER THE VALUE :");
	scanf("%f",&a);
	if (a>0)
		printf("\nNUMBER IS +VE");
	else if (a<0)
		printf("\nNUMBER IS -VE");
	else
		printf("\nBOTH ARE EQUAL");
	return 0;
}*/




									/*PR,NR,RPU,BILL,MTYPE*/
/*#include<stdio.h>
int main()
{
	int pr,nr,uc;
	char mtype;
	float rpu,bill;
	printf("\nENTER THE VALUE OF PR & NR :");
	scanf("%d%d",&pr,&nr);
	printf("\nENTER THE M-TYPE (D OR C)  :");
	fflush(stdin);
	scanf("%c",&mtype);
	if (mtype=='d' || mtype=='D')
		rpu=4.50;
	else
		rpu=5.50;
	uc=nr-pr;
	bill=uc*rpu;
	printf("\nYOUR UNITS CONSUME IS :%d",uc);
	printf("\nBILL IS :%f",bill);
	return 0;
}*/


											/*PR,NR,UC,BILL(2-nd way)*/
/*#include<stdio.h>
int main()
{
	int pr,nr,uc;
	char mtype;
	float rpu,bill;
	printf("\nENTER THE VALUE OF PR & NR :");
	scanf("%d%d",&pr,&nr);
	printf("\nENTER THE M-TYPE (D OR C)  :");
	fflush(stdin);
	scanf("%c",&mtype);
	uc=nr-pr;
	printf("\nYOUR UNITS CONSUME IS :%d",uc);

	if (mtype=='d' || mtype=='D')
	{	
		rpu=4.50;
		bill=uc*rpu;
		printf("\nBILL IS :%f",bill);
	}
	else if (mtype=='c' || mtype=='C')
	{
		rpu=5.50;
		bill=uc*rpu;
		printf("\nBILL IS :%f",bill);
	}
	else
		printf("\nINVALID OPERATION");
	return 0;
}




											/*PR,NR,UC,BILL(3-rd way)*/
/*#include<stdio.h>
int main()
{
	int pr,nr,uc;
	char mtype;
	float rpu,bill;
	printf("\nENTER THE VALUE OF PR & NR :");
	scanf("%d%d",&pr,&nr);
	printf("\nENTER THE M-TYPE (D OR C)  :");
	fflush(stdin);
	scanf("%c",&mtype);
	uc=nr-pr;
	printf("\nYOUR UNITS CONSUME IS :%d",uc);

	if (mtype=='d' || mtype=='D')	
		rpu=4.50;
	else if (mtype=='c' || mtype=='C')
		rpu=5.50;
	else
	{
		printf("\nINVALID OPERATION");
		return 0;
    }
    bill=uc*rpu;
    printf("\nBill %f",bill);
   	return 0;
}*/



											/*MARK OF 3 SUBJECT AND CALCULATE % AND FIND RTESULT*/
/*#include<stdio.h>
int main()
{
	float a,b,c,per;
	printf("\nENTER THE VALUES OF A,B,C  :");
	scanf("%f%f%f",&a,&b,&c);
	per=a+b+c/300*100;
	printf("\nPERCENTAGE IS :%f",per);
	if (per>=75)
		printf("\nDISTINCTION");
	else if (per>=60 && per<75)
		printf("\nFIRST	DISTINCTION");		
	else if (per>=50 && per<60)
		printf("\nSECOND DISTINCTION");
	else
		printf("\nFAIL");
	return 0;
}*/


		
									/*CHECK ALPHABETS IS VOWEL OR NOT*/		
/*#include<stdio.h>
int main()
{
	char alpha;
	printf("\nENTER ANY ALPHABETS  :");
	scanf("%c",&alpha);
	if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
		printf("\nVOWEL");
	else
		printf("\nCONSONENT");	
	return 0;
}*/



					/*INPUT ANY CHAR & CHECK WHETHER IT IS AN UPPER/LOWER CASE ALPHABET,A NUM,SPACE,SPL. CHARACTER*/
#include<stdio.h>
int main()
{
	char ch;
	printf("\nENTER ANY CHARACTER  :");
	scanf("%c",&ch);
	if (ch>=48 && ch<=57)
		printf("\nA NUMBER CHARACTER");
	else if (ch>=65 && ch<=90)
		printf("\nUPPER CASE ALPHABET");
	else if (ch>=97 && ch<=122)
		printf("\nLOWER CASE ALPHABET");
	else if (ch=' ')
		printf("\nSpace");
	else
		printf("\nSPECIAL CHARACTER");
	return 0;
}					 




									/*Age and give the remarks*/		
/*#include<stdio.h>
int main()
{
	int age;
	printf("\nENTER THE AGE :");
	scanf("%d",&age);
	if (age>0 && age<=12)
		printf("\nCHILD");
	else if (age>12 && age<=19)
		printf("\nTEENAGER");
	else if (age>19 && age<=50)
		printf("\nMATURE");
	else
		printf("\nOLD");
	return 0;
}*/



										/*MAX OUT OF 3 NUMBERS*/
/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nENTER THE VALUES OF A,B,C :");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
		printf("\nA IS GREATER");
	else if (b>a && b>c)
		printf("\nB IS GREATER");
	else if (c>a && c>b)
		printf("\nC IS GREATER");
	else if (a==b && a==c)
		printf("\nBOTH ARE SIMMILAR");
}*/




/*#include<stdio.h>
int main()
{
	int a;
	printf("\nENTER THE VALUE OF A :");
	scanf("%d",&a);
	printf("\nCOMPL. OF %d is %d ",a,~a);
	return 0;
}*/
