//////CHECK VOWEL OR CONSONANT(BY SWITCH CASE)
//#include<stdio.h>
//int main()
//{
//	char alpha;
//	printf("\nENTER ANY ALPHABET :");
//	scanf("%c",&alpha);
//	switch (alpha)
//	{
//		case 'a':
//		case 'e':		
//		case 'i':
//		case 'o':
//		case 'u':printf("\nVowel");
//				break;
//		default :printf("\nCONSONENT");
//				break;									
//	}
//	return 0;
//	
//}


//////MONTH AND SEASON
//#include<stdio.h>
//int main()
//{	
//	int m;
//	printf("\nENTER MONTH (1-12) :");
//	scanf("%d",&m);
//	switch(m)
//	{
//		case 12:
//		case 1:
//		case 2:printf("\nWINTER");
//			   break;
//		case 3:
//		case 4:
//		case 5:printf("\nSPRING");
//			   break;
//
//		case 6:
//		case 7:
//		case 8:printf("\nSUMMER");
//			   break;
//
//		case 9:
//		case 10:
//		case 11:printf("\nANTUMN");
//			   break;
//			   
//		default:printf("INVALID-MONTH");	
//	}
//	return 0;
//}



//////////////////////////////////////////////////////NESTED SWITCH CASE/////////////////////////////////////////////////////
////QUES-MONTH & N.O.F (BY NEST.SWITCH CASE)
//#include<stdio.h>
//int main()
//{	
//	int m,y;
//	printf("\nENTER MONTH (1-12) AND YEAR :");
//	scanf("%d%d",&m,&y);
//	switch(m)
//	{
//		case 4:
//		case 6:
//		case 9:
//		case 11:printf("\nN.O.D 30");
//			    break;
//		case 2:switch (y%4)
//			   {
//			   	case 0:printf("\nN.O.D 29");
//			   		   break;
//			   	default:printf("\nN.O.D 28");
//			   }
//			   break;
//		default:
//				printf("\nN.O.D 31");	
//	}
//	return 0;
//}

////QUES-FOR LOOP BASED QUESTIONS ://///////

/*1)------------*/

//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i=1;i<=3;i++)
//	{
//		printf("\nHello");
//	}
//	return 0;
//}

/*1-DIFFERENCE OF for();)--------------*/

//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i=1;i<=3;i++);
//	{
//		printf("\nHello");
//	}
//	return 0;
//}



/*#include<stdio.h>
int main()
{
	int i;
	for (i=1;i<=3;i++)
	{
		printf("\nHello:%d",i);
	}
	printf("\ni is %d",i);   //To get the value of i which is 4 i=4//
	return 0;
}*/


/*QUES-----FORWARD COUNTING 1 TO N*/
//#include<stdio.h>
//int main()
//{
//	int i,n;
//	printf("\nENTER THE VALUE OF N :");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

/*QUES------BACKWARD COUNTING 1 TO N*/
/*#include<stdio.h>
int main()
{
	int i,n;
	printf("\nENTER THE VALUE OF N :");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		printf("%d ",i);
	}
	return 0;
}*/

/*QUES-----EVEN ONLY*/
/*#include<stdio.h>
int main()
{
	int i,n;
	printf("\nENTER THE VALUE OF N :");
	scanf("%d",&n);
	for (i=2;i<=n;i+=2)
	{
		printf("%d ",i);
	}
	return 0;
}*/



/*------------------------------------------------------------------------------*/
////QUES-NESTED SWITCH CASE MAIN MENU->RECTANGLE MENU AND CIRCLE MENU////

#include<stdio.h>
int main()
{
	float l,b,area_r,per,r,area_c,circum;
	int choice;
	printf("\tMAIN MENU");
	printf("\n1.RECTANGLE");
	printf("\n2.CIRCLE");
	printf("\nENTER YOUR CHOICE :");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:printf("\tRECTANGLE MENU");
			   printf("\n1.AREA");
			   printf("\n2.PERIMETER");
			   printf("\nENTER CHOICE :");
			   scanf("%d",&choice);
			   switch (choice)
			   {
			   		case 1:printf("\nENTER THE VALUE OF LENGTH AND BREADTH :");
			   			   scanf("%f%f",&l,&b);
			   			   area_r=l*b;
			   			   printf("\nREQ. AREA IS %f",area_r);
			   			   break;
			   		
					case 2:printf("\nENTER THE VALUE OF LENGTH AND BREADTH :");
			   			   scanf("%f%f",&l,&b);
			   			   per=2*(l+b);
			   			   printf("\nREQ. PARIMETER IS %f",per);
			   			   break;
			   		default:printf("\nINVALID-CHOICE");
			   }
			   break;
		case 2:printf("\tCIRCLE MENU");
			   printf("\n1.AREA");
			   printf("\n2.CIRCUMFENCE");
			   printf("\nENTER CHOICE :");
			   scanf("%d",&choice);
			   switch (choice)
			   {
			   		case 1:printf("\nENTER THE VALUE OF RADIUS :");
			   			   scanf("%f",&r);
			   			   area_c=2*3.14*r;
			   			   printf("\nREQ. AREA IS %f",area_c);
			   			   break;
			   		
					case 2:printf("\nENTER THE VALUE OF RADIUS :");
			   			   scanf("%f",&r);
			   			   circum=3.14*r*r;
			   			   printf("\nREQ. PARIMETER IS %f",circum);
			   			   break;
			   		default:printf("\nINVALID-CHOICE");
			   }
			   break; 	
		default :
				printf("\nSORRY YOUR CHOICE IS WRONG");	   		
	}
	return 0;
}

